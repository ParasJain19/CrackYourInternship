class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int> t(n+1);
        //t[i] = ith Ugly number;
        //we will reutrn t[n] = nth ugly number
        
        t[1] = 1; //1st Ugly number
        
        int i2; //i2th Ugly number
        int i3; //i3rd Ugly number
        int i5; //i5th Ugly number
        
        //initially i2th, i3rd and i5th Ugly number point to 1 i.e. first ugly number
        i2 = i3 = i5 = 1;
        
        for(int i = 2; i<=n; i++) {
            int i2th_ugly = t[i2] * 2;
            
            int i3rd_ugly = t[i3] * 3;
            
            int i5th_ugly = t[i5] * 5;
            
            t[i] = min({i2th_ugly, i3rd_ugly, i5th_ugly});
            
            if(t[i] == i2th_ugly)
                i2++;
            
            if(t[i] == i3rd_ugly)
                i3++;
            
            if(t[i] == i5th_ugly)
                i5++;
        }
        
        return t[n];
    }
};
