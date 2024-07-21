static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> result;
        unordered_map<int, bool> mp1, mp2;

        for (const int num : nums1) {
            mp1[num] = true;
        }
        for (const int num : nums2) {
            mp2[num] = true;
        }

        vector<int> temp;

        for (const int num : nums1) {
            if (mp2.find(num) == mp2.end()) {
                temp.push_back(num);
                mp2[num] = true;
            }
        }
        result.push_back(temp);

        temp.clear();

        for (const int num : nums2) {
            if (mp1.find(num) == mp1.end()) {
                temp.push_back(num);
                mp1[num] = true;
            }
        }
        result.push_back(temp);

        return result;
    }
};