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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if (root == nullptr) return result;
        
        queue<TreeNode*> nodesQueue;
        nodesQueue.push(root);
        
        while (!nodesQueue.empty()) {
            int levelSize = nodesQueue.size();
            vector<int> currentLevel;
            
            for (int i = 0; i < levelSize; ++i) {
                TreeNode* currentNode = nodesQueue.front();
                nodesQueue.pop();
                currentLevel.push_back(currentNode->val);
                
                if (currentNode->left) nodesQueue.push(currentNode->left);
                if (currentNode->right) nodesQueue.push(currentNode->right);
            }
            
            result.push_back(currentLevel);
        }
        
        return result;
    }
};