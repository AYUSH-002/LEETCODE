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
    bool evaluateTree(TreeNode* root) {
        if (root->left == nullptr and root->right == nullptr)
            return root->val;
        if (root->val == 2)
            return evaluateTree(root->left) | evaluateTree(root->right);
        else
            return evaluateTree(root->left) & evaluateTree(root->right);
    }
};