class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<pair<int,int>> dist;
        int i=0;
        for(auto vec:points)
        {
            int x=pow(vec[0],2)+pow(vec[1],2);
            dist.push_back({x,i});
            i++;
        }
        sort(begin(dist),end(dist),[](auto &a,auto &b){
            return a.first<b.first;//sorting on basis of value
        });
        vector<vector<int>> ans;
        for(int a=0;a<k;a++)
        {
            ans.push_back(points[dist[a].second]);//pushing value of vec by taking index i from dist
        }
        return ans;
    }
};
