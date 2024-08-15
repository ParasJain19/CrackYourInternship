class Solution {
public:
    string addBinary(string a, string b) {
        int sizeA = a.length();
        int sizeB = b.length();
        int i = sizeA - 1;
        int j = sizeB - 1;
        int carry = 0;
        string ans = "";

        while (i >= 0 || j >= 0 || carry) {
            int n1 = (i >= 0) ? a[i] - '0' : 0;
            int n2 = (j >= 0) ? b[j] - '0' : 0;
            int sum = n1 + n2 + carry;

            if (sum <= 1) {
                ans += to_string(sum);
                carry = 0;
            } else if (sum == 2) {
                carry = 1;
                ans += "0";
            } else if (sum == 3) {
                carry = 1;
                ans += "1";
            }
            i--;
            j--;
        }
        
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

