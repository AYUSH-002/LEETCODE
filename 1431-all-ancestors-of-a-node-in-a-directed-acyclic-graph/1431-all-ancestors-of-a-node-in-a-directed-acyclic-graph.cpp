class Solution {
public:
    vector<vector<int>> getAncestors(int n, vector<vector<int>>& edges) {
    vector<vector<int>> result(n);
    vector<vector<int>> adj(n);

    for (const vector<int>& edge : edges) {
        adj[edge[1]].push_back(edge[0]);
    }

    for (int i = 0; i < n; ++i) {
        queue<int> q;
        unordered_set<int> visited;

        for (int ancestor : adj[i]) {
            q.push(ancestor);
            visited.insert(ancestor);
        }

        while (!q.empty()) {
            int current = q.front();
            q.pop();
            result[i].push_back(current);

            for (int ancestor : adj[current]) {
                if (visited.find(ancestor) == visited.end()) {
                    q.push(ancestor);
                    visited.insert(ancestor);
                }
            }
        }

        sort(result[i].begin(), result[i].end());
    }

    return result;
}
};