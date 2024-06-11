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
static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    void preorder(TreeNode *root,vector<int>&preOrder)
    {
    if(root==nullptr) return;

    preOrder.push_back(root->val);
    preorder(root->left,preOrder);
    preorder(root->right,preOrder);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>result;
        preorder(root,result);
        return result;
    }
};