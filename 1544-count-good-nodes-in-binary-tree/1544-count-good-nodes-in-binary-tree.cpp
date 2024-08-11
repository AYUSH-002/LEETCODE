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
	return 0;
}();
class Solution {
public:
    int solve(TreeNode* root, int maxSoFar) {
        if (root == nullptr) {
            return 0;
        }
        
        int result = 0;
        if (root->val >= maxSoFar) {
            result = 1;
        }
        
        maxSoFar = max(maxSoFar, root->val);
        
        result += solve(root->left, maxSoFar);
        result += solve(root->right, maxSoFar);
        
        return result;
    }

    int goodNodes(TreeNode* root) {
        return solve(root, INT_MIN);
    }
};
