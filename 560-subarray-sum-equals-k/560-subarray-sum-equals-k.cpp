class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum[nums.size()];
        sum[0]=nums[0];
        for(int i=1;i<nums.size();++i)
        {
            sum[i]=sum[i-1]+nums[i];
        }
        map<int,int>mp;
        int ans=0;
        for(int i=0;i<nums.size();++i)
        {
            if(sum[i]==k)
                ans++;
            if(mp.find(sum[i]-k)!=mp.end())
                ans+=mp[sum[i]-k];
            mp[sum[i]]++;
        }
        return ans;
    }
};