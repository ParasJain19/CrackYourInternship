class Solution {
  public:
    int findPair(int n, int x, vector<int> &arr) {
        sort(begin(arr),end(arr));
        int l=0;
        int r=1;

        while(r<n)
        {
            if(arr[r]-arr[l]==x)
            {
                return 1;
            }
            else if(arr[r]-arr[l]<x)
            {
                r++;
            }
            else if(arr[r]-arr[l]>x)
            {
                l++;
            }
            else{
                
            }
            if(l==r)
            {
                r++;
            }
            
        }
        return -1;
    }
};
