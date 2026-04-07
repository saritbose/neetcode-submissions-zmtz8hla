class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(string ch : tokens) {
            if(ch == "+" || ch == "-" || ch == "*" || ch == "/") {
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();

                if(ch == "+") st.push(a+b);
                else if(ch == "-") st.push(b-a);
                else if(ch == "*") st.push(a*b);
                else st.push(b/a);

            } else {
                int val = stoi(ch);
                st.push(val);
            }
        }
        return st.top();
    }
};
