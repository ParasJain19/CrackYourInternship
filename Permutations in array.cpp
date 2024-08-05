class Solution {
  public:
    bool isPossible(int k, vector<int> &arr1, vector<int> &arr2) {
        sort(begin(arr1),end(arr1));
        sort(begin(arr2),end(arr2),[](auto a,auto b){
            return a>b;
        });
        for(int i=0;i<arr1.size();i++)
        {
            if(arr1[i]+arr2[i]<k)
            return false;
        }
        return true;
    }
};
