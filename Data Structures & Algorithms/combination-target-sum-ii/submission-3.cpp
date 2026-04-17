class Solution {
public:
    void combination(vector<int>& nums, int target, int start, vector<int>& temp, vector<vector<int>>& ans) {
        if(target == 0) {
            ans.push_back(temp);
            return;
        }

        for(int i=start;i<nums.size();i++) {
            if(i > start && nums[i] == nums[i-1]) continue;

            if(nums[i] > target) break;

            temp.push_back(nums[i]);
            combination(nums,target-nums[i],i+1,temp,ans);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());

        vector<int> temp;
        vector<vector<int>> ans;

        combination(candidates,target,0,temp,ans);

        return ans;
    }
};
