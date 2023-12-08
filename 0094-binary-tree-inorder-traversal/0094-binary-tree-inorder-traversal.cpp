/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int>sol;
    void inorder(TreeNode*root)
    {
        if(root==NULL)
        {
            return;
        }
        if(root->left)
        {
            inorderTraversal(root->left);
        }
        sol.push_back(root->val);
        if(root->right)
        {
            inorderTraversal(root->right);
        }

    }
    vector<int> inorderTraversal(TreeNode* root) 
    {
        inorder(root);
        return sol;
    }
};