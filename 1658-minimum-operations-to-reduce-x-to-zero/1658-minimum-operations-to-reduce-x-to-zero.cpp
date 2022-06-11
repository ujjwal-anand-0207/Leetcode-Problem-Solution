class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int target=0;
        int n=nums.size();
        for(int i :nums) 
            target+=i;
        if(target==x)
            return n;
        target-=x;
        int start_ind=0;
        int max_len=0;
        int curr_sum=0;
        bool flag=false;
        for(int end_ind=0;end_ind<n;++end_ind)
        {
            curr_sum+=nums[end_ind];
            while(start_ind<=end_ind && curr_sum> target)
            {
                curr_sum-=nums[start_ind];
                start_ind++;               
            }
            if(curr_sum==target)
            {
                flag=true;
                max_len=max(max_len,end_ind-start_ind+1);
            }
        }
        return  flag? n-max_len : -1;
    }
};