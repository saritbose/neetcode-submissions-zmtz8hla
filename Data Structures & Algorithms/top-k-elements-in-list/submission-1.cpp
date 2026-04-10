class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        vector<int> ans;

        for(int i=0;i<nums.size();i++) {
            if(m.find(nums[i]) == m.end()) {
                m[nums[i]] = 1;
            } else {
                m[nums[i]]++;
            }
        }

        vector<pair<int,int>> mp(m.begin(),m.end());
        sort(mp.begin(),mp.end(),[](const auto& a, const auto& b) {return a.second > b.second;});

        for(auto [key,val] : mp) {
            if(k == 0) break;
            ans.push_back(key);
            k--;
        }

        return ans;
    }
};
