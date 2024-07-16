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
    bool findPath(TreeNode* root, int value, vector<int>& path) {
        if (root == nullptr) return false;
        path.push_back(root->val);
        if (root->val == value) return true;
        if (findPath(root->left, value, path)) return true;
        if (findPath(root->right, value, path)) return true;
        path.pop_back();
        return false;
    }

    TreeNode* findNode(TreeNode* root, int value) {
        if (root == nullptr) return nullptr;
        if (root->val == value) return root;
        TreeNode* leftResult = findNode(root->left, value);
        if (leftResult != nullptr) return leftResult;
        return findNode(root->right, value);
    }

    bool newFindPath(TreeNode* root, int value, string& sol) {
        if (root == nullptr) return false;
        if (root->val == value) return true;
        sol.push_back('L');
        if (newFindPath(root->left, value, sol)) return true;
        sol.pop_back();
        sol.push_back('R');
        if (newFindPath(root->right, value, sol)) return true;
        sol.pop_back();
        return false;
    }

    string getDirections(TreeNode* root, int startValue, int destValue) {
        vector<int> traversalp;
        vector<int> traversalq;

        findPath(root, startValue, traversalp);
        findPath(root, destValue, traversalq);

        int LCA = 0;
        for (int i = 0; i < traversalp.size() && i < traversalq.size(); ++i) {
            if (traversalp[i] == traversalq[i]) {
                LCA = traversalp[i];
            }
        }

        TreeNode* newRoot = findNode(root, LCA);
        string finalRes = "";
        string des = "";
        string start = "";
        newFindPath(newRoot, startValue, start);
        newFindPath(newRoot, destValue, des);
        for (int i = 0; i < start.size(); i++) {
            finalRes += "U";
        }
        finalRes += des;
        return finalRes;
    }
};