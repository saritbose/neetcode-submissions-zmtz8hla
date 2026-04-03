class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;

        for(int i=0;i<nums.size();i++) {
            int secondNum = target - nums[i];

            if(m.find(secondNum) == m.end()) {
                m[nums[i]] = i;
            } else {
                return {m[secondNum],i};
            }
        }

        return {};
    }
};
