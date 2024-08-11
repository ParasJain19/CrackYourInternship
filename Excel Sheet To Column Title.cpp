class Solution {
public:
    string convertToTitle(int columnNumber) {
        unordered_map<int,char> mp;
        for(int i=1;i<=26;i++) {
            mp[i] = 'A' + i-1;
        }
        string res="";
        while(columnNumber > 0) {
            int rem = columnNumber % 26;
            if(rem == 0) {
                res='Z'+res;
                columnNumber -= 1;
            }
            else {
                res= mp[rem]+res;
            }
            columnNumber /= 26;
        }
        return res;
    }
};
