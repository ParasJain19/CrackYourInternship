class Solution {
public:
    bool pal(string s) {
        int n = s.length();
        for (int i = 0, j = n - 1; i < j; i++, j--) {
            if (s[i] != s[j]) {
                return false;
            }
        }
        return true;
    }

    bool validPalindrome(string s) {
        int left = 0, right = s.length() - 1;

        while (left < right) {
            if (s[left] != s[right]) {
               
                string res_1 = s.substr(left + 1, right - left);//removing left
                string res_2 = s.substr(left, right - left);//removing right
                return pal(res_1) || pal(res_2);
            }
            left++;
            right--;
        }

        return true;
    }
};
