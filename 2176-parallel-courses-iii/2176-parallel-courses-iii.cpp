static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    int minimumTime(int n, vector<vector<int>>& relations, vector<int>& time) {
        vector<int> inDegree(n, 0);
        vector<vector<int> > graph(n);

        for (const vector<int>& relation : relations) {
            int prevCourse = relation[0] - 1;
            int nextCourse = relation[1] - 1;
            graph[prevCourse].push_back(nextCourse);
            inDegree[nextCourse]++;
        }

        queue<int> q;
        for (int i = 0; i < n; i++) {
            if (inDegree[i] == 0) {
                q.push(i);
            }
        }
        
        vector<int> completionTime(n, 0);
        int minTime = 0;
        
        while (!q.empty()) {
            int course = q.front();
            q.pop();
            
            for (int nextCourse : graph[course]) {
                inDegree[nextCourse]--;
                completionTime[nextCourse] = max(completionTime[nextCourse], completionTime[course] + time[course]);
                
                if (inDegree[nextCourse] == 0) {
                    q.push(nextCourse);
                }
            }
            
            minTime = max(minTime, completionTime[course] + time[course]);
        }
        
        return minTime;
    }
};