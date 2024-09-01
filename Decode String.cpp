class Solution {
public:
    string decodeString(string s) {
        int mul = 0;
        stack<int> num; 
        stack<string> resStack; 
        string res = "";

        for (int i = 0; i < s.length(); i++) {
            if (isdigit(s[i])) { 
                mul = mul * 10 + (s[i] - '0');
            } 
            else if (s[i] == '[') {
                num.push(mul); 
                resStack.push(res); 
                res = ""; 
                mul = 0;
            } 
            else if (s[i] == ']') {
                string temp = res;
                res = resStack.top(); // Get the last accumulated result
                resStack.pop();
                
                int repeatTimes = num.top(); // Get the number of repetitions
                num.pop();
                
                for (int j = 0; j < repeatTimes; j++) {
                    res += temp; // Append the repeated string to the result
                }
            } 
            else {
                 res.push_back(s[i]); // Accumulate characters
            }
        }

        return res;
    }
};
