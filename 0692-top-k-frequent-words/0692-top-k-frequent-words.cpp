static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    static bool compare(pair<int, string>& a, pair<int, string>& b){
        if(a.first == b.first){
            return a.second > b.second;
        }else{
            return a.first < b.first;
        }
        
    }
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string, int> m;
        for(int i=0; i<words.size(); i++){
            m[words[i]]++;
        }

        vector<pair<int, string>> v;
        for(auto a: m){
            v.push_back({a.second, a.first});
        }
        vector<string> res;
        make_heap(v.begin(), v.end(), compare);
        
        int maxi = v[0].first;
        while(k!=0){
            res.push_back(v[0].second);
            pop_heap(v.begin(), v.end(), compare);
            v.pop_back();
            k--;
        }

        return res;
    }
};