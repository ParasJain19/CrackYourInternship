class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        if(intervals.size()<=1)
        {
            return 0;
        }
        sort(begin(intervals),end(intervals),[](auto& a,auto& b){
            return a[1]<b[1];
        });
        int ans=0;
        int end=intervals[0][1];
        for(int i=1;i<intervals.size();i++)
        {
            if(intervals[i][0]<end)
            {
                ans++;
            }
            else{
                end=intervals[i][1];
            }
        }
        return ans;
    }
};
