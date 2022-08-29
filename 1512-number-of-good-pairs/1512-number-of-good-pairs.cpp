class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
       int ans =0;
       map<int ,int>mp;
        for(int i =0;i<nums.size();++i)
        {
            if(mp[nums[i]]>0)
                ans+=mp[nums[i]];
            mp[nums[i]]++;
        }
        return ans;
    }
};