static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        stack<int> sand;
        queue<int> stu;

        int n = sandwiches.size() , m = students.size();

        for(int i=n-1;i>=0;i--)
            sand.push(sandwiches[i]);

        for(int i=0;i<m;i++)
            stu.push(students[i]);
        
        while(!stu.empty())
        {
            int n=stu.size();
            for(int i=0;i<n;i++)
            {
                if(stu.front()==sand.top())
                {
                    stu.pop();
                    sand.pop();
                }
                else
                {
                    int temp = stu.front();
                    stu.pop();
                    stu.push(temp);
                }
            }
            if(n==stu.size()) break;
        }
        return stu.size();
    }
};