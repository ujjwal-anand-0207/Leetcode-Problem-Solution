class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int v=1;
        vector<vector<int>>ans(n,vector<int>(n));
        int l=0,r=n-1,t=0,b=n-1;
        
        while(v<=n*n )
        {
            for(int i=l;i<=r;++i)
            {
                ans[t][i]=v;
                v++;
            }
            t++;
            for(int i=t;i<=b;++i)
            {
                ans[i][r]=v;
                v++;
            }
            r--;
            for(int i=r;i>=l;--i)
            {
                ans[b][i]=v;
                ++v;
            }
            b--;
            for(int i=b;i>=t;--i)
            {
                ans[i][l]=v;
                ++v;
            }
            ++l;
        }
        return ans;
    }
};