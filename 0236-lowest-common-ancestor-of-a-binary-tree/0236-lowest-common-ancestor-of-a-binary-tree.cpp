/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
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
    bool findPath(TreeNode* root, TreeNode* node, vector<TreeNode*>& path) {
        if(root==nullptr) return false;
        path.push_back(root);
        if(root->val==node->val) return true;
        if(findPath(root->left,node,path)) return true;
        if(findPath(root->right,node,path)) return true;
        path.pop_back();
        return false;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode*> traversalP;
        vector<TreeNode*> traversalq;

        findPath(root, p, traversalP);
        findPath(root, q, traversalq);

        TreeNode* LCA = NULL;
        for (int i = 0; i < traversalP.size() && i < traversalq.size(); ++i) {
            if (traversalP[i] == traversalq[i]) {
                LCA = traversalP[i];
            }
        }

        return LCA;
    }
};