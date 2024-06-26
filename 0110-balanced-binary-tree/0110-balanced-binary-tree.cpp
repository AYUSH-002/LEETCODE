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
    int height(TreeNode* root)
    {
        if(root==nullptr) return 0;

        int leftHeight=height(root->left);
        if(leftHeight==-1) return -1;

        int rightHeight=height(root->right);
        if(rightHeight==-1) return -1;

        if(abs(rightHeight-leftHeight)>1) return -1;

        return max(leftHeight,rightHeight)+1;
    }
    bool isBalanced(TreeNode* root) 
    {
        return height(root)==-1 ? false:true;
    }
};