class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for(char ch : s) {
            if(!st.empty() && (ch == ')' || ch == '}' || ch == ']')) {   
                if(st.top() == '(' && ch == ')'  || st.top() == '{' && ch == '}' || st.top() == '[' && ch == ']') {
                    st.pop();
                } else {
                    return false;
                }
            } else {
                st.push(ch);
            }
        }
        return st.empty() ? true : false;
    }
};
