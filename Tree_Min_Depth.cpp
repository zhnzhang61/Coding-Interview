//Given a binary tree, find its minimum depth.

//The minimum depth is the number of nodes along the shortest path from the root node down to the nearest leaf node.

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
    int minDepth(TreeNode* root) 
    {
        if(!root) return 0;//if there is no node, the height of the tree is 0
        if(!root->left) return 1+minDepth(root->right);//if the left tree is null, the answer is current level plus the minimum depth of right tree
        if(!root->right) return 1+minDepth(root->left);//same with above
        return 1+min(minDepth(root->right),minDepth(root->left));//find the minimum between left and right tree
    }
};