class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        vector<int> vis(V,0);
        vis[0]=1;
        queue<int> q;
        q.push(0);
        vector<int> ans;
        ans.push_back(0);
        while(!q.empty())
        {
            int node=q.front();
            q.pop();

            for(auto& nbr:adj[node])
            {
                if(vis[nbr]==0)
                {
                    vis[nbr]=1;
                    q.push(nbr);
                    ans.push_back(nbr);
                }
                else{
                    continue;
                }
            }
        }
        return ans;
    }
};
