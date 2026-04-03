class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> m;
        vector<vector<string>> ans;

        for(string s : strs) {
            vector<int> ar(26,0);

            for(char c : s) {
                ar[c - 'a']++;
            }

            string key = "";
            for (int i = 0; i < 26; i++) {
                key += "#" + to_string(ar[i]);
            }

            m[key].push_back(s);
        }

        for(auto& val : m) {
            ans.push_back(val.second);
        }

        return ans;
    }
};
