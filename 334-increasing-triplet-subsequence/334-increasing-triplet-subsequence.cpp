class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int a=INT_MIN,b=INT_MIN;
        for(int i=nums.size()-1;i>=0;--i)
        {
            if(nums[i]>=a)
                a=nums[i];
            else if(nums[i]>=b)
                b=nums[i];
            else return true;
        }
        return false;
        
    }
};