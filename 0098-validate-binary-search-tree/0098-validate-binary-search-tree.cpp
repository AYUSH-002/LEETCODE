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
    void inorder(TreeNode* root, vector<int>& result) {
    if (root == NULL) return;
    inorder(root->left, result);
    result.push_back(root->val);
    inorder(root->right, result);
    }
    bool isValidBST(TreeNode* root) {
       vector<int> result;
       inorder(root, result);
       bool flag=true;
       for(int i=0;i<result.size()-1;i++)
       {
        if(result[i]<result[i+1])
        {
            continue;
        }
        else
        {
            flag=false;
            break;
        }
       }
       return flag;
    }
};