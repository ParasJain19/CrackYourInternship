class Solution {
  public:
	void shortest_distance(vector<vector<int>>&matrix){
	    int n=matrix.size();
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<n;j++)
	        {
	            if(matrix[i][j]==-1)
	            {
	                matrix[i][j]=12222;//kind of infinity as if no path is there from i to j
	            }
	        }
	    }
	    for(int via=0;via<n;via++)
	    {
	       for(int i=0;i<n;i++)
	       {
	        for(int j=0;j<n;j++)
	          {
	            matrix[i][j]=min(matrix[i][j], matrix[i][via] + matrix[via][j] );
	          }
	        } 
	    }
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<n;j++)
	        {
	            if(matrix[i][j]==12222)
	            {
	                matrix[i][j]=-1;//again changing to -1
	            }
	        }
	    }
	    
	}
};
