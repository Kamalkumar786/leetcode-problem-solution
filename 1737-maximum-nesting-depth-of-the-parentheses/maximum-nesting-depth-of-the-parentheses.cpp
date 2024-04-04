class Solution {
public:
    int maxDepth(string s) {
        int a = 0;
        stack<char> st;
        for (char c : s) {
            if (c == '(') {
                st.push(c);
            } else if (c == ')') {
                st.pop();
            }
            a= max(a,(int)st.size());
        }
        return a;
    }
};