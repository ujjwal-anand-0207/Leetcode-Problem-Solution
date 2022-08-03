class Solution {
public:
    string multiply(string num1, string num2) {
       int n=num1.size();
        int m=num2.size();
        vector<int>temp(n+m,0);
        for(int i=n-1;i>=0;--i)
        {
            for(int j=m-1;j>=0;--j)
            {
                temp[i+j+1]+=(num1[i]-'0')*(num2[j]-'0');
                temp[i+j]+=temp[i+j+1]/10;
                temp[i+j+1]%=10;
            }
        }
        int i=0;
       while(i<temp.size() && temp[i]==0)
       {
           ++i;
       }
       string ans="";
       while(i<temp.size())
       {
           ans+=(temp[i]+'0');
           ++i;
       }
        if(ans=="")
            return "0";
     return ans;
    }
};