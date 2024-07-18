static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    int pairs = 0;
    vector<int> dfs(TreeNode* root, int distance) {
        if (!root) {
            return {};
        }
        if (!root->left && !root->right) {
            // leaf node
            return {1};
        }
        vector<int> left = dfs(root->left, distance);
        vector<int> right = dfs(root->right, distance);

        for (int i = 0; i < left.size(); i++) {
            for (int j = 0; j < right.size(); j++) {
                int dis = left[i] + right[j];
                if (dis <= distance) {
                    pairs++;
                }
            }
        }

        for(auto &i: left){
            i++;
        }
        for (auto i : right) {
            left.push_back(i+1);
        }
        return left;
    }
    int countPairs(TreeNode* root, int distance) {
        dfs(root, distance);
        return pairs;
    }
};