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
    TreeNode* removeLeafNodes(TreeNode* root, int target) {
        if(root->left) root->left=removeLeafNodes(root->left,target);
        if(root->right) root->right=removeLeafNodes(root->right,target);
        return (root->val==target && root->left==nullptr && root->right==nullptr) ? nullptr:root;
    }
};