class Solution {
public:
    void dust(vector<vector<char>> &grid ,int i,int j,int m, int n)
    {
        if(i<0||j<0||i==m||j==n||grid[i][j]=='0')
            return ;
        grid[i][j]='0';
        dust(grid,i+1,j,m,n);
        dust(grid,i,j+1,m,n);
        dust(grid,i-1,j,m,n);
        dust(grid,i,j-1,m,n);
        return;        
    }
    int numIslands(vector<vector<char>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int ans=0;
        for(int i=0;i<m;++i)
        {
            for(int j=0;j<n;++j)
            {
                if(grid[i][j]=='1')
                {
                    ans++;
                    dust(grid,i,j,m,n);
                }
            }
        }
        return ans;
    }
};