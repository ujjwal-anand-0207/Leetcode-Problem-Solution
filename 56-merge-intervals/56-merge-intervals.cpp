class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if(intervals.size()<2)
            return intervals;
        
        vector<vector<int>>ans=intervals;
        sort(ans.begin(),ans.end());
        int j=0;
        for(int i=1;i<ans.size();++i)
        {
           if(ans[j][1]>=ans[i][0])
           {
               ans[j][1]=max(ans[j][1],ans[i][1]);
           }
            else
            {
                 ++j;
                ans[j][0]=ans[i][0];
                ans[j][1]=ans[i][1];
            }
        }
        ans.erase(ans.begin()+j+1,ans.end());
        return ans;
    }
};