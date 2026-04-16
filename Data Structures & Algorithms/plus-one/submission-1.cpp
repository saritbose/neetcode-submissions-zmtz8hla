class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        int nums = 0;
        int i = 0;

        if(digits[n-1] >= 0 && digits[n-1] <= 8) {
            digits[n-1]++;
            return digits;
        }

        while(i < n) {
            nums = (nums * 10) + digits[i]; 
            i++;
        }
        nums = nums + 1;

        vector<int> ans;
        while(nums > 0) {
            ans.push_back(nums % 10);
            nums /= 10;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
