//Given a binary search tree (BST), find the lowest common ancestor (LCA) of two given nodes in the BST.


/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) 
    {
        if(p->val<root->val && q->val < root->val)//if both values less than root value, LCA on the left
            return lowestCommonAncestor(root->left,p,q);
        if(p->val>root->val && q->val > root->val)//if both values greater than root value, LCA on the right
            return lowestCommonAncestor(root->right,p,q);
        return root;//otherwise it should be root
    }
};