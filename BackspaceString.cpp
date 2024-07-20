class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> a;
        stack<char> b;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='#')
            {  if(!a.empty())// most important ,use it here only not in main if cond
               a.pop();
            }
            else
            {
                a.push(s[i]);
            }
        }
        for(int i=0;i<t.length();i++)
        {
            if(t[i]=='#')
            {if(!b.empty())
               b.pop();
            }
            else
            {
                b.push(t[i]);
            }
        }
        if(a==b)
        return true;
        else
        return false;
    }
};
