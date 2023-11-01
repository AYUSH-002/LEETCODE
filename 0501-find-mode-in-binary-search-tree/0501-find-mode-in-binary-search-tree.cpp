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
    unordered_map<int,int> umap;
    void inOrder(TreeNode* root){
        if(root==NULL){
            return;
        }
        inOrder(root->left);
        umap[root->val]++;
        inOrder(root->right);
    }
    vector<int> findMode(TreeNode* root) 
    {
        if (root == nullptr)
            return {};
        
        inOrder(root);
        vector<int>res;
        int maxFreq=INT_MIN;
        for(auto& x:umap)
        {
            if(x.second>maxFreq)
            {
                maxFreq=x.second;
            }
        }
        for(auto& x:umap)
        {
            if(x.second==maxFreq)
            {
                res.push_back(x.first);
            }
        }
        return res;
    }
};