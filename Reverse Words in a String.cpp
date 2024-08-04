class Solution {
public:
    string reverseWords(string s) {
        stack<string> ans;
        int i=0;
        while(i<s.length())
        {
         while(i<s.length() && s[i]==' ')
         {
            i++;
         }
         string res="";
         while(i<s.length() && s[i]!=' ')
         {
            res+=s[i];
            i++;
         }
         // IMPORTANT Push the word onto the stack if it's not empty 
        if (!res.empty()) {
            ans.push(res);
        }
         
        }
        string result = "";
        while (!ans.empty()) {
            result += ans.top();
            ans.pop();
            if (!ans.empty()) {
                result += " ";
            }
        }
        return result;

    }
};
