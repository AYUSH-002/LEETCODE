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
    TreeNode* constructBST(const vector<int>& preorder, int& index, int bound) {
        if(preorder.size()==index||preorder[index]>bound)
        {
            return NULL;
        }
        TreeNode*root=new TreeNode(preorder[index++]);
        root->left=constructBST(preorder,index,root->val);
        root->right=constructBST(preorder,index,bound);
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int index=0;
        return constructBST(preorder,index,1000);
    }
};