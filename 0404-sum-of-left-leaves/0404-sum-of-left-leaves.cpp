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
    int sum=0;
    void solve(TreeNode* root)
    {
        if(root==NULL) return;
        if(root->left){
            if(root->left->left==NULL && root->left->right==NULL)
            {
                sum+=root->left->val;
            }
            solve(root->left);
        }
        solve(root->right);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        solve(root);
        return sum;
    }
};