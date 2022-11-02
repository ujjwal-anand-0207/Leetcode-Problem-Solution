class Solution {
public:
    string addBinary(string a, string b) {
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        string ans="";
        bool carry=false;
        int n=a.size();
        int m=b.size();
        if(n>m)
        {
            while(n>m)
            {
                b.push_back('0');
                ++m;
            }
        }
        else 
        {
            while(m>n)
            {
                a.push_back('0');
                ++n;
            }
        }
        cout<<m<<" "<<n;
        n=a.size();
        for(int i=0;i<n;++i)
        {
            if(a[i]=='0'&& b[i]=='0')
            {
                if(carry)
                {
                    ans.push_back('1');
                    carry=!carry;
                } 
                else
                    ans.push_back('0');
            }
            else if(a[i]=='1' && b[i]=='1')
            {
                if(carry)
                {
                    ans.push_back('1');
                }
                else
                {
                    ans.push_back('0');
                    carry=true;
                }
            }
            else
            {
                if(carry)
                {
                    ans.push_back('0');
                }
                else
                {
                    ans.push_back('1');
                }
            }
        }
        if(carry)
            ans.push_back('1');
        reverse(ans.begin(),ans.end());
        return ans;
    }
};