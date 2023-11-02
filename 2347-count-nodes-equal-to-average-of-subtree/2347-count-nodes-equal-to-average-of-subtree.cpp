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
    int countNodes(TreeNode* root)
    {
        if(root==NULL) return 0;
        return 1+countNodes(root->left)+countNodes(root->right);
    }
    int sumNodes(TreeNode* root)
    {
        if(root==NULL) return 0;
        return root->val+sumNodes(root->left)+sumNodes(root->right);
    }
    int averageOfSubtree(TreeNode* root) 
    {
        if(root==NULL) return 0;
        int sum=sumNodes(root);
        int nodes=countNodes(root);;
        int avg=round(floor(sum/nodes));
        if(avg==root->val)
        {
            return 1+averageOfSubtree(root->left)+averageOfSubtree(root->right);
        }
        return averageOfSubtree(root->left)+averageOfSubtree(root->right);
    }
};