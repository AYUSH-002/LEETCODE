static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int length = heights.size();
        vector<int> left(length);
        vector<int> right(length);
        int maxArea = 0;
        left[0] = -1;
        right[length - 1] = length;

        for (int i = 1; i < length; ++i) {
            int currentIndex = i - 1;
            while (currentIndex >= 0 && heights[currentIndex] >= heights[i]) {
                currentIndex = left[currentIndex];
            }
            left[i] = currentIndex;
        }

        for (int i = length - 2; i >= 0; --i) {
            int currentIndex = i + 1;
            while (currentIndex < length && heights[currentIndex] >= heights[i]) {
                currentIndex = right[currentIndex];
            }
            right[i] = currentIndex;
        }
        for (int i = 0; i < length; ++i) {
            maxArea = max(maxArea, heights[i] * (right[i] - left[i] - 1));
        }

        return maxArea;
    }
};