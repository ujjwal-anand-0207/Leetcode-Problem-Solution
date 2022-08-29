class Solution {
public:
    int finalValueAfterOperations(vector<string>& nums) {
        int x=0;
        for(int i=0;i<nums.size();++i)
        {
            if(nums[i]=="++X"||nums[i]=="X++")
                x++;
            else
                x--;
        }
        return x;
    }
};