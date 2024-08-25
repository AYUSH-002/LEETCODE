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
    void postorder(TreeNode *root,vector<int>&postOrder)
    {
    if(root==nullptr) return;

    postorder(root->left,postOrder);
    postorder(root->right,postOrder);
    postOrder.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        // vector<int>postOrder;
        // postorder(root,postOrder);
        // return postOrder;
        vector<int> result;
    if (root == nullptr) return result;

    stack<TreeNode*> st;
    st.push(root);

    while (!st.empty()) {
        TreeNode* node = st.top();
        st.pop();
        result.push_back(node->val);

        if (node->left != nullptr) {
            st.push(node->left);
        }
        if (node->right != nullptr) {
            st.push(node->right);
        }
    }
    reverse(result.begin(), result.end());

    return result;
    }
};