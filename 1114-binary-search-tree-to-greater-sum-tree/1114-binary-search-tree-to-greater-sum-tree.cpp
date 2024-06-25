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
    int sumGreaterElements(TreeNode* root, vector<int>&result)
    {
        int n=result.size();
        for(int i=0;i<n;i++)
        {
            if(root->val==result[i])
            {
                return accumulate(result.begin()+i,result.end(),0);
            }
        }
        return -1;
    }
    void inorder(TreeNode* root, vector<int>&result)
    {
        if(root==nullptr)
        {
            return;
        }
        inorder(root->left,result);
        result.push_back(root->val);
        inorder(root->right,result);
    }
    void solution(TreeNode* root,vector<int>&result)
    {
        if(root==nullptr)
        {
            return;
        }
        solution(root->left,result);
        root->val=sumGreaterElements(root,result);
        solution(root->right,result);
    }
    TreeNode* bstToGst(TreeNode* root) {
        vector<int>result;
        inorder(root,result);
        solution(root,result);
        return root;
    }
};