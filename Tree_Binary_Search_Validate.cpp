/*
Given a binary tree, determine if it is a valid binary search tree (BST).

Assume a BST is defined as follows:

The left subtree of a node contains only nodes with keys less than the node's key.
The right subtree of a node contains only nodes with keys greater than the node's key.
Both the left and right subtrees must also be binary search trees.
*/


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
    bool isValidBST(TreeNode* root) 
    {
        return valid(root,numeric_limits<long>::min(),numeric_limits<long>::max());
    }
    
    
    bool valid(TreeNode* node, long min, long max)
    {
        if(!node)//The first node value could be anything
        {
            return true;
        }
        if(node->val <= min || node->val >= max)//the node value should be in between its left node value and right node value
        {
            return false;
        }
        return valid(node->left,min,node->val)&&valid(node->right,node->val,max);//the left node value should be greater than the minimum but less than the value of its parent
        //the right node value should be greater than the value of its parent but smaller than the max
    }
};