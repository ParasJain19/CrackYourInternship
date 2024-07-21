//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
public:
    int longestCommonSubstr(string S1, string S2, int n, int m)
    {
        vector<vector<int>> ans(n+1, vector<int>(m+1, 0));
        int maxLength = 0;

        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= m; j++)
            {
                if(S1[i-1] == S2[j-1])
                {
                    ans[i][j] = ans[i-1][j-1] + 1;
                    maxLength = max(maxLength, ans[i][j]);
                }
                else
                {
                    ans[i][j]=0;
                }
            }
        }
        return maxLength;
    }
};



//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n, m; cin >> n >> m;
        string s1, s2;
        cin >> s1 >> s2;
        Solution ob;

        cout << ob.longestCommonSubstr (s1, s2, n, m) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends