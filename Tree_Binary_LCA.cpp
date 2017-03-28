//Given a binary tree, find the lowest common ancestor (LCA) of two given nodes in the tree.

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
        if(root==NULL||root ==p ||root = q) return root;//root is the LCA if root is null of either of them is root
        TreeNode left = lowestCommonAncestor(root->left,p,q);//define left node as the LCA of p and q from left subtree(if there are one)
        TreeNode right = lowestCommonAncestor(root->right,p,q);//define right node as the LCA of p and q from right subtree(if there are one)
        
        if(left!=NULL && right!= NULL)  return root;//if both branch return trees, the LCA should be root
        return left!= NULL?left:right;//if the left tree returns a tree, the left node is a LCA
    }
};