class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int sum=0;
        int curr_sum=0;
        unordered_set<int>seen;
        int start_ind=0,end_ind=0;
        for(end_ind=0;end_ind<nums.size();++end_ind)
        {
            while(seen.find(nums[end_ind])!=seen.end())
            {
                curr_sum-=nums[start_ind];
                seen.erase(nums[start_ind]);
                start_ind+=1;
            }
            seen.insert(nums[end_ind]);
            curr_sum+=nums[end_ind];
            sum=max(sum,curr_sum);
            
        }
        return sum;
    }
};