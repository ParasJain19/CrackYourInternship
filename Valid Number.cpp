class Solution {
public:
    bool isNumber(string s) {
        unordered_map<char, int> mp;
        mp['+'] = 0;
        mp['-'] = 0;
        mp['e'] = 0;
        mp['E'] = 0;
        mp['.'] = 0;
        bool has_digit = false;
        bool has_exponent = false;

        for (int i = 0; i < s.length(); i++) {
            char c = s[i];
            
            if (c == '+' || c == '-') {
                if (i > 0 && s[i - 1] != 'e' && s[i - 1] != 'E') {
                    return false;
                }
                if (i == s.length() - 1) return false; 
            }
            else if (c == '.') {
                if (mp['.'] == 1 || mp['e'] == 1 || mp['E'] == 1) {
                    return false;
                }
                mp['.'] = 1;
            }
            else if (c == 'e' || c == 'E') {
                if (mp['e'] == 1 || mp['E'] == 1 || !has_digit) {
                    return false;
                }
                mp['e'] = mp['E'] = 1;
                has_exponent = true;
                if (i == s.length() - 1) return false;  
            }
            else if (isdigit(c)) {
                has_digit = true;
            }
            else {
                return false;  
            }
        }
        
        return has_digit; 
    }
};
