class Solution {
public:
    int removePalindromeSub(string s) {
        bool flag=true;
        for(int i=0,j=s.length()-1;i<j;++i,--j)
        {
            
            if(s[i]!=s[j])
                flag=false;
        }
        if(flag)
            return 1;
        else 
            return 2;
    }
};