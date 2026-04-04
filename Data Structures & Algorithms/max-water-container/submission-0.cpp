class Solution {
public:
    int maxArea(vector<int>& heights) {
        int area = INT_MIN;
        int i = 0, j = heights.size() - 1;

        while(i < j) {
            int base = j - i;
            int length = min(heights[i],heights[j]);

            area = max(area, length*base);

            heights[i] <= heights[j] ? i++ : j--;
        }

        return area;
    }
};
