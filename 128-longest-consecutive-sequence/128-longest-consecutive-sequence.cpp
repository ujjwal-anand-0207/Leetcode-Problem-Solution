class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
         if(nums.size()==0)
            return 0;
        if(nums.size()==1)
            return 1;
        int count=1,m=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;++i)
        {
            if(nums[i+1]==nums[i]+1)
            { 
                count++;
                m=max(m,count);
            }
            else if(nums[i]==nums[i+1])
                continue;
            else
            {
                count =1;
            }
        }
       m=max(count,m);
        return m;
    }
};