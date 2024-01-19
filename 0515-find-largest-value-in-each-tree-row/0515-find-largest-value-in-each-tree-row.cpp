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
    vector<int> largestValues(TreeNode* root) {
        vector<int>res;
        if(root==nullptr)
        {
            return res;
        }
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            int n=q.size();
            int maxi=INT_MIN;
            for(int i=0;i<n;i++)
            {
                TreeNode *temp=q.front();
                q.pop();
                if(temp->val>maxi)
                {
                    maxi=temp->val;
                }
                if(temp->left)
                {
                    q.push(temp->left);
                }
                if(temp->right)
                {
                    q.push(temp->right);
                }
            }
            res.push_back(maxi);
            
        }
        return res;
    }
};