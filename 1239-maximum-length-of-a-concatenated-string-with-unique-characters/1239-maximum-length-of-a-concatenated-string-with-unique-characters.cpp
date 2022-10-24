class Solution {
public:
    int solve(vector<string> &arr,int i,int vis){
        if(i==arr.size()){
            return 0 ;
        }
        int n1 = solve(arr,i+1,vis);
        int n2 = INT_MIN;
        bool flag = 0;
        for(int j = 0;j<arr[i].size();j++){
            // check if any of the character in ith string is already in the ans using bit manipulation
            if((vis & (1<<(arr[i][j]-'a'))) == (1<<(arr[i][j]-'a'))){
                flag=1;
                break;
            }
            // we include the particular alphabet in the ans
            else{
                vis |= (1<<(arr[i][j]-'a'));
            }
        }
        // if any of the ith string character is already in the ans, we cannot include that string
        if(flag){
            return n1;
        }
        // if no characters of ith string are in the ans, we take maximum of including and not including it and return max
        
        n2 = arr[i].size()+solve(arr,i+1,vis);
        return max(n1,n2);
    }
    int maxLength(vector<string>& arr) {
        return solve(arr,0,0);
        
    }
};