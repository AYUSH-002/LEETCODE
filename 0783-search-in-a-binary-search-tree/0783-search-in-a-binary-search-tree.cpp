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
    TreeNode* searchBST(TreeNode* root, int val) {
        TreeNode* temp=root;
        while(temp->left!=NULL || temp->right!=NULL)
        {
            if(temp->val>val && temp->left!=NULL)
            {
                temp=temp->left;
            }
            else if(temp->val<val && temp->right!=NULL)
            {
                temp=temp->right;
            }
            else
            {
                break;
            }
        }
        return (temp->val==val) ? temp: NULL;
    }
};