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
     pair<int,int> solve(TreeNode* root , int &res)
    {
        if(root==NULL)
        return make_pair(0,0);

         pair<int,int>low=solve(root->left,res);
         pair<int,int>high=solve(root->right,res);

         int sum=low.first+high.first+root->val;
        int  nodes=low.second+high.second+1;
         if(sum/nodes==root->val)
          res++;

        return make_pair(sum, nodes);

    }
   
    int averageOfSubtree(TreeNode* root) {
        int res=0;
        solve(root,res);
        return res;
    }
};
// class Solution {
// public:
//     int countNodes(TreeNode* root)
//     {
//         if(root==NULL) return 0;
//         return 1+countNodes(root->left)+countNodes(root->right);
//     }
//     int sumNodes(TreeNode* root)
//     {
//         if(root==NULL) return 0;
//         return root->val+sumNodes(root->left)+sumNodes(root->right);
//     }
//     int averageOfSubtree(TreeNode* root) 
//     {
//         if(root==NULL) return 0;
//         int sum=sumNodes(root);
//         int nodes=countNodes(root);;
//         int avg=round(floor(sum/nodes));
//         if(avg==root->val)
//         {
//             return 1+averageOfSubtree(root->left)+averageOfSubtree(root->right);
//         }
//         return averageOfSubtree(root->left)+averageOfSubtree(root->right);
//     }
// };