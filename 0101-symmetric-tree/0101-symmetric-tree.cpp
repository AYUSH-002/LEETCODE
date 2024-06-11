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
    bool isSameTree(TreeNode* p, TreeNode* q) 
    {
        if(!p || !q)
        {
            return p==q;
        }
        return p->val==q->val && isSameTree(p->left,q->right) && isSameTree(p->right,q->left);
    }
    bool isSymmetric(TreeNode* root) {
        if (root == nullptr) return true;
        return (isSameTree(root->left, root->right));
    }
};