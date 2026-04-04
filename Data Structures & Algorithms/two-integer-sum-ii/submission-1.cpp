class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        int i = 0, j = n - 1;

        while(i < j) {
            int ans = numbers[i] + numbers[j];

            if(ans > target) {
                j--;
                continue;
            } else if(ans < target) {
                i++;
                continue;
            } else {
                return {i+1,j+1};
            }
        }

        return {};
    }
};
