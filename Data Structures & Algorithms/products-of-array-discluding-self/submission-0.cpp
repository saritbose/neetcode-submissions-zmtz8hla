class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int suf = 1;
        vector<int> suffix(n,1);
        vector<int> res(n,1);

        for(int i=1;i<n;i++) {
            res[i] = nums[i-1] * res[i-1];
        }

        for(int i=n-2;i>=0;i--) {
            suf *= nums[i+1];
            res[i] = res[i] * suf;
        }

        return res;
    }
};
