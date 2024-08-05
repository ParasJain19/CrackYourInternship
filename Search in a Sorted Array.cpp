class Solution {
public:
    int search(vector<int>& arr, int target) {
        int l=0;
        int r=arr.size()-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(arr[mid]==target)
            {
                return mid;
            }
            else if(arr[l]<=arr[mid]) //check if sorted from l to mid
            {
                if(arr[l]<=target && arr[mid]>target){ // if arr[l]==target
                    r=mid-1;
                }
                else
                {
                    l=mid+1;
                }
            }
            else{
                if(arr[mid]<target && arr[r]>=target){ //if arr[r]==target
                    l=mid+1;
                }
                else
                {
                    r=mid-1;
                }
            }
        }
        return -1;
    }
};
