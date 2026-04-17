class Solution {
public:
    set<vector<int>> s;
    void combination(vector<int>& nums, int target, int i, vector<int>& temp, vector<vector<int>>& ans) {
        if(target == 0) {
            if(s.find(temp) == s.end()) {
                ans.push_back(temp);
                s.insert(temp);
            }
            return;
        }

        if(i >= nums.size() || target < 0) return;

        temp.push_back(nums[i]);
        // include single time
        combination(nums,target-nums[i],i+1,temp,ans);

        // include multiple time
        combination(nums,target-nums[i],i,temp,ans);

        temp.pop_back();
        // exclude
        combination(nums,target,i+1,temp,ans);
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<int> temp;
        vector<vector<int>> ans;

        combination(nums,target,0,temp,ans);

        return ans;
    }
};
