class Solution {
public:
    string intToRoman(int num) {
        vector<string> v1 = {"",     "I", "II",   "III", "IV",
                             "V", "VI", "VII", "VIII", "IX"};
        vector<string> v2 = {"",      "X",   "XX",  "XXX", "XL",
                             "L", "LX", "LXX", "LXXX", "XC"};
        vector<string> v3 = {"",
            "C",
            "CC",
            "CCC",
            "CD",
            "D",
            "DC",
            "DCC",
            "DCCC",
            "CM",
        };
        vector<string> v4 = {"",
            "M",
            "MM",
            "MMM"
        };
        string nums=to_string(num);
        string ans="";
        int n=nums.length();
        for(int i=0;i<n;i++)
        {  int digit=nums[i]-'0';
           int pos=n-i-1;
            if(pos==3)
            {
                ans+=v4[digit];
            }
            else if(pos==2)
            {
                ans+=v3[digit];
            }
           else if(pos==1)
            {
                ans+=v2[digit];
            }
            else
            {
                ans+=v1[digit];
            }
        }
        return ans;
    }
};
