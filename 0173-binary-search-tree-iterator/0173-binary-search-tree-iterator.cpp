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
class BSTIterator {
public:
    vector<int> result;
    int index = 0;
    int length;

    void inorder(TreeNode* root, vector<int>& result) {
        if (root == nullptr) return;
        inorder(root->left, result);
        result.push_back(root->val);
        inorder(root->right, result);
    }

    BSTIterator(TreeNode* root) {
        inorder(root, result);
        length = result.size();
    }

    int next() {
        return result[index++];
    }

    bool hasNext() {
        return index < length;
    }
};
