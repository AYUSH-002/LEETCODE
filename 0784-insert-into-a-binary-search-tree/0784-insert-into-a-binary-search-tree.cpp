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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if (root == NULL) {
            return new TreeNode(val);
        }
        TreeNode*temp=root;
        while(true)
        {
            if(val<temp->val)
            {
                if(temp->left==NULL)
                {
                    temp->left=new TreeNode(val);
                    break;
                }
                temp=temp->left;
            }
            else if(val>temp->val)
            {
                if(temp->right==NULL)
                {
                    temp->right=new TreeNode(val);
                    break;
                }
                temp=temp->right;
            }
        }
        return root;
    }
};