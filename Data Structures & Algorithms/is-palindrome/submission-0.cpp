class Solution {
public:
    bool isAlpha(char s) {
        if((s >= 'A' && s <= 'Z') || (s >= 'a' && s <= 'z') || (s >= '0' && s <= '9')) {
            return true;
        }
        return false;
    }

    bool isPalindrome(string s) {
        int n = s.size();
        int i = 0, j = n-1;

        while(i < j) {
            if(!isAlpha(s[i])) {
                i++;
                continue;
            }

            if(!isAlpha(s[j])) {
                j--;
                continue;
            }

            if(tolower(s[i]) != tolower(s[j])) {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};
