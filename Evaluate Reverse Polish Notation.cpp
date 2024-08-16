class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for (int i = 0; i < tokens.size(); i++) {
            // Check for negative number also
            if (isdigit(tokens[i][0]) || (tokens[i][0] == '-' && tokens[i].size() > 1)) {
                st.push(stoi(tokens[i]));
            } else {
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                switch(tokens[i][0]) {
                    case '+':
                        st.push(b + a);
                        break;
                    case '-':
                        st.push(b - a);
                        break;
                    case '*':
                        st.push(b * a);
                        break;
                    case '/':
                        st.push(b / a);
                        break;
                }
            }
        }
        return st.top();
    }
};
