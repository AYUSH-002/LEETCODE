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
    
    void solve(TreeNode* root, int &counter, int &result, int k){
        if(root == NULL)    return;
        solve(root->left, counter, result, k);
        counter++;
        if(counter == k){
            result = root->val;
            return;
        }
        solve(root->right, counter, result, k);
    }
    int kthSmallest(TreeNode* root, int k) {
        
        int counter = 0;        
        int result;
        solve(root, counter, result, k);
        return result;
    }
};