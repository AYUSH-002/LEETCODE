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
    void inorder(TreeNode* root, vector<int>& result) {
    if (root == NULL) return;
    inorder(root->left, result);
    result.push_back(root->val);
    inorder(root->right, result);
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int> result;
        inorder(root, result);
        return result[k-1];
    }
};