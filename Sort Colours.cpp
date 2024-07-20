
class Solution {
public:
    void sortColors(vector<int>& nums) {
        unordered_map<int, int> freq;
        for(int i=0;i<nums.size();i++)
        {
            freq[nums[i]]++;
        }
        
        int i=0;
        while(freq[0]>0)
            {
                nums[i]=0;
                i++;
                freq[0]--;
            }
        while(freq[1]>0)
            {
                nums[i]=1;
                i++;
                freq[1]--;
            }
        while(freq[2]>0)
            {
                nums[i]=2;
                i++;
                freq[2]--;
            }       
            
    }
};
