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
    int ans=INT_MIN;
    void solution(TreeNode* temp,int mini=INT_MAX,int maxi=INT_MIN)
    {
        if(temp==NULL) return;
        mini=min(mini,temp->val);
        maxi=max(maxi,temp->val);
        ans=max(ans,abs(maxi-mini));
        solution(temp->left,mini,maxi);
        solution(temp->right,mini,maxi);
    }
    int maxAncestorDiff(TreeNode* root) {
        solution(root);
        return ans;
    }
};