class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
      long long product=1;
        int z=0;
     for(int i : nums)
     {
         if(i==0)
             z++;
         else
         product*=i;
     }
         
        vector<int>ans;
        for(int i: nums)
        {
            if(z>1)
                ans.push_back(0);
           else if(z==1)
            {
                if(i!=0)
                    ans.push_back(0);
                else
                    ans.push_back(product);
            }
            else if(i!=0)
               
                ans.push_back(product/i);
           
        } 
        return ans;
    }
};