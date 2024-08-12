class Solution {
public:
    int count_one(int c)
    {   int count=0;
        while(c!=0)
        {
            int x=c%2;
            if(x==1)
            {
                count++;
            }
            c=c/2;
        }
        return count;
    }
    vector<int> countBits(int n) {
        vector<int> ans;
        for(int i=0;i<=n;i++)
        {
            ans.push_back(count_one(i));
        }
        return ans;
    }
};
