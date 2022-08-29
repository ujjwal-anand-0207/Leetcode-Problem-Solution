class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans=0,temp=0;
      for(int i=0;i<nums.size();++i)
      {
          if(nums[i]==0)
              temp=0;
          else
          {
              temp++;
              ans=max(temp,ans);
          }
      }
        return ans;
    }
};