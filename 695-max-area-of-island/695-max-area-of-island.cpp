class Solution {
    private:
     int helper(int i,int j,vector<vector<int>> &grid)
    {
        if(i<0 || j<0|| i>=grid.size()||j>=grid[0].size()|| !grid[i][j])
            return 0;
        grid[i][j]=0;
        return 1 + helper(i,j-1,grid)+helper(i,j+1,grid)+helper(i-1, j, grid)+helper(i+1,j,grid);
    }
public:
   
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int ans=0;
        
        for(int i=0;i<grid.size();++i)
            for(int j=0;j<grid[0].size();++j)
               if(grid[i][j])      
                   ans=max(ans,helper(i,j,grid));
        
        return ans;
    }
};