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
    int rangeSumBST(TreeNode* root, int low, int high) {
        int res=0;
        res=result(root,low,high);
        return res;
    }

    int result(TreeNode* temp, int low, int high) 
    {
        if(temp)
        {
            int ans=0;
            if(temp->val>=low && temp->val<=high) ans+=temp->val;
            if(temp->val>=low) ans+=result(temp->left,low,high);
            if(temp->val<=high) ans+=result(temp->right,low,high);
            return ans;
        }
        return 0;
    }
};