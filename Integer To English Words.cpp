
class Solution {
public:
    string numberToWords(int num) {
        if(num==0)
        {
            return "Zero";
        }
        
        vector<string> v1 = {"",     "One", "Two",   "Three", "Four",
                             "Five", "Six", "Seven", "Eight", "Nine"};
        vector<string> v2 = {"",      "Ten",   "Twenty",  "Thirty", "Forty",
                             "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
        vector<string> v3 = {
            "Ten",
            "Eleven",
            "Twelve",
            "Thirteen",
            "Fourteen",
            "Fifteen",
            "Sixteen",
            "Seventeen",
            "Eighteen",
            "Nineteen"
        }; 
        int count = 1;
        int l = 1;
        string nums = to_string(num);
        string s1 = "";
        string s2 = "";
        for (int i = nums.size() - 1; i >= 0; i--) {
            cout<<s2<<" ";
            int temp = nums[i] - '0';
            if (count == 1) {
                if (l > 0) {
                    if (l == 2 ) {
                        s2 = "Thousand " + s2;
                    } else if (l == 3) {
                        if(s2.substr(0,8)=="Thousand")
                        {
                            s2.erase(0,9);
                        }
                        s2 = "Million " + s2;
                    } else if (l == 4) {
                        if(s2.substr(0,7)=="Million")
                        {
                            s2.erase(0,8);
                        }
                        s2 = "Billion " + s2;
                    }
                    l++;
                }
                count++;
                if (nums[i] == '0') {
                    continue;
                }
                if(i>0 && nums[i-1]=='1' )
                {
                    s2=v3[nums[i]-'0']+" "+s2;
                    count++;
                    i--;
                    continue;
                }
                
                s1 = v1[temp];
                s2 = s1 + " " + s2;
                s1 = "";

            } else if (count == 2) {
                count++;
                if (nums[i] == '0') {
                    continue;
                }
                s1 = v2[temp];
                s2 = s1 + " " + s2;
                s1 = "";

            } else {
                count = 1;
                if (nums[i] == '0') {
                    continue;
                }
                s2 = "Hundred " + s2;
                s1 = v1[temp];
                s2 = s1 + " " + s2;
                s1 = "";
            }
        }
        s2.pop_back();
        return s2;
    }
};
