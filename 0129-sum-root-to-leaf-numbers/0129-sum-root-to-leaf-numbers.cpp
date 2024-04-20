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
    void solution(TreeNode* root,int value)
    {
        if(root->left)
        {
            solution(root->left,value*10+root->val);
        }
        if(root->right)
        {
            solution(root->right,value*10+root->val);
        }
        if(!root->left && !root->right)
        {
            sum+=value*10+root->val;
        }
    }
    int sumNumbers(TreeNode* root) {
        solution(root,0);
        return sum;

    }
};