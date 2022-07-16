class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();++i)
        {
            mp[nums[i]]++;
        }
        int m=0,n;
        for(auto i:mp)
        {
           if(i.second>m)
           {
               m=i.second;
               n=i.first;
           }
        }
        return n;
    }
};