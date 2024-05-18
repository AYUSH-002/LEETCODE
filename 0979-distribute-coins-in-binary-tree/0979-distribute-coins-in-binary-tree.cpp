static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    int moves = 0;
    int distributeCoins(TreeNode* root) {
        dfs(root);
        return moves;
    }
    int dfs(TreeNode* root) {
        if(!root) return 0;
        int l = dfs(root->left), r = dfs(root->right);
        int extraCoins = (root->val - 1) + l + r;
        moves += abs(extraCoins);
        return extraCoins;
    }
};