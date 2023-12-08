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
//  static int speedup = []() {
// 	ios::sync_with_stdio(false);
// 	cin.tie(nullptr);
// 	cout.tie(0);
// 	return 0;
// }();
class Solution {
public:
    string s;
    void preorder(TreeNode*root)
    {
        if(root==NULL)
        {
            return;
        }
        s+=to_string(root->val);
        if(root->left||root->right)
        {
            s+='(';
            preorder(root->left);
            s+=')';
        }
        if(root->right)
        {
            s+='(';
            preorder(root->right);
            s+=')';
        }

    }
    string tree2str(TreeNode* root) 
    {
        preorder(root);
        return s;
    }
};