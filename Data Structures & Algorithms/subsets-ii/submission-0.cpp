class Solution {
public: 
    void combination(vector<int>& nums, int i, vector<int>& res, vector<vector<int>>& ans) {
        if(i >= nums.size()) {
            ans.push_back(res);
            return;
        }

        // include
        res.push_back(nums[i]);
        combination(nums,i+1,res,ans);

        res.pop_back();
        // exclude
        while(i+1 < nums.size() && nums[i] == nums[i+1]) {
            i++;
        }
        combination(nums,i+1,res,ans);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        vector<int> res;
        vector<vector<int>> ans;
        combination(nums,0,res,ans);

        return ans;
    }
};
