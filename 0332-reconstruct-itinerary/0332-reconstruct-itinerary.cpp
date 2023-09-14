class Solution {
public:
    vector<string> findItinerary(vector<vector<string>>& tickets) 
    {
        ios_base::sync_with_stdio(0); cin.tie(NULL);
        map<string,multiset<string>> adj;
        for(vector<string>&v : tickets){
            adj[v[0]].insert(v[1]);
        }
        vector<string> ans;
        stack<string> st;
        st.push("JFK");

        while(!st.empty()){
            string str = st.top();

            if(adj[str].size() == 0){
                ans.push_back(str);
                st.pop();
            }
            else{
                auto it = adj[str].begin();
                st.push(*it);
                adj[str].erase(it);
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};