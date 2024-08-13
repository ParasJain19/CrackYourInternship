class NumArray {
public:
    vector<int> num;
    int sum=0;
    NumArray(vector<int>& nums) {
        for(int i:nums)
        {
            num.push_back(i);
        }
    }
    
    int sumRange(int left, int right) {
        sum=0;
        for(int i=left;i<=right;i++)
        {
            sum+=num[i];
        }
        return sum;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */
