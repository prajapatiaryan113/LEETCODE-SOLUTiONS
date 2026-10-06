class Solution {
public:
    int minAddToMakeValid(string s) {
       stack<char> st;
        int count = 0;

        for (char c : s) {
            if (c == '(') {
                st.push(c);
            } 
            else if (c == ')') {
                if (st.empty()) {
                    count++; // Unmatched closing parenthesis
                } else {
                    st.pop(); // Matched pair found, pop the '('
                }
            }
        }

        // Add remaining '(' left in the stack that never got closed
        return count + st.size();
    }
};