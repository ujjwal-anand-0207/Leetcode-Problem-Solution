class Solution {
public:
      static bool comp(vector<int>&v1,vector<int>&v2){
        return v1[1]<v2[1];
    }
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int ans=0;
        int small;
        sort(intervals.begin(),intervals.end(),comp);
        small=intervals[0][1];
        for(int i=1;i<intervals.size();++i)
        {
            
            if(small>intervals[i][0])
                ans++;
            else
                small=intervals[i][1];
        }
        return ans;
    }
};