class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int, int> freqMap;
        for(int num : nums) {
            freqMap[num]++;
        }

        vector<pair<int, int>> freqVec(freqMap.begin(), freqMap.end());
        sort(freqVec.begin(), freqVec.end(), [](const pair<int, int> &a, const pair<int, int> &b) {
            if(a.second == b.second) {
                return a.first > b.first;
            }
            return a.second < b.second;
        });

        vector<int> result;
        for(const auto& [num, freq] : freqVec) {
            result.insert(result.end(), freq, num);
        }
        return result;
    }
};
