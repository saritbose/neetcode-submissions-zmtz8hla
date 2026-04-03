class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.size() != t.size()) {
            return false;
        }
        
        int n = s.size();
        int ar[26] = {0};

        for(int i=0;i<n;i++) {
            ar[s[i] - 97]++;
            ar[t[i] - 97]--;
        }

        for(int i=0;i<26;i++) {
            if(ar[i] != 0) {
                return false;
            }
        }

        return true;
    }
};
