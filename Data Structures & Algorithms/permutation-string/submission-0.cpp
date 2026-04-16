class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int l = 0;
        int s1freq[26] = {0};
        int window[26] = {0};

        for(char ch : s1) {
            s1freq[ch - 'a']++;
        }

        for(int r=0;r<s2.length();r++) {
            window[s2[r]-'a']++;
            bool res = true;

            if(r - l + 1 > s1.length()) {
                window[s2[l]-'a']--;
                l++;
            }
            
            for(int i=0;i<26;i++) {
                if(s1freq[i] != window[i]) {
                    res = false;
                    break;
                }
            }

            if(res) return true;
                
        }
        return false;
    }
};
