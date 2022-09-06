class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        map<int,bool>mp;
        for(int i=0;i<nums.size();++i)
        {
            mp[nums[i]]=true;
        }
        int ans=0;
        for(int i=0;i<nums.size();++i)
        {
            if(mp.find(nums[i]+diff)!=mp.end()&& mp.find(nums[i]+diff+diff)!=mp.end())
                ans++;
        }
        return ans;
    }
};