//{ Driver Code Starts
// C++ program to evaluate value of a postfix expression

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to evaluate a postfix expression.
    int evaluatePostfix(string S)
    {
        stack<int> digits;
        for(int i=0;i<S.length();i++)
        {
            if(S[i]>='0' && S[i]<='9')
            {
                int c=S[i]-'0';
                digits.push(c);
            }
            else
            {
                int a=digits.top();
                digits.pop();
                int b=digits.top();
                digits.pop();
                switch(S[i])
                {
                    case '*':
                    digits.push(b*a);
                    break;
                    case '/':
                    digits.push(b/a);
                    break;
                    case '+':
                    digits.push(b+a);
                    break;
                    case '-':
                    digits.push(b-a);
                    break;
                }
            }
        }
        return digits.top();
    }
};

//{ Driver Code Starts.

// Driver program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--)
    {
        string S;
        cin>>S;
        Solution obj;
    
    cout<<obj.evaluatePostfix(S)<<endl;
    }
    return 0;
}

// } Driver Code Ends
