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
    void solve(TreeNode* root,int len,int &mini,int &ans)
    {
        if(root==NULL) return;
        solve(root->left,len+1,mini,ans);
        if(mini<len)
        {
            ans=root->val;
            mini=len;
        }
        solve(root->right,len+1,mini,ans);
    }
    int findBottomLeftValue(TreeNode* root) {
        int ans=0;
        int mini=INT_MIN;
        solve(root,0,mini,ans);
        return ans;
    }
};