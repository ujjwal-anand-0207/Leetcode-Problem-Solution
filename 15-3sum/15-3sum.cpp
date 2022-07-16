class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;++i)
        {
            
            int j=i+1,k=nums.size()-1,sum=-(nums[i]);
            
            while(j<k)
            {
                if(nums[j]+nums[k]==sum)
                {
                    vector<int>q;
                    q.push_back(nums[i]);
                    q.push_back(nums[j]);
                    q.push_back(nums[k]);
                   
                  ans.push_back(q);
                  while(1)
                  {
                      if(i+1<nums.size()-1 && nums[i]==nums[i+1])
                      ++i;
                      else
                          break;
                  }
                     while(1)
                  {
                      if(j+1<nums.size()-1 && nums[j]==nums[j+1])
                      ++j;
                      else
                          break;
                  }
                     while(1)
                  {
                      if(k>0 && nums[k]==nums[k-1])
                      --k;
                         else break;
                  }
                      
                   
                     ++j;
                    --k;
                    
                }
                else if(nums[j]+nums[k]>sum)
                    k--;
                else
                    j++;
            }
        }
        
        return ans;
    }
};