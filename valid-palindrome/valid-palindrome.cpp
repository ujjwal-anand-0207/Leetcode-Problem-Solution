class Solution {
public:
    bool isPalindrome(string s) {
        for(int i=0;i<s.length();++i)
        {
            if(s[i]>='A' && s[i]<='Z')
                s[i]=s[i]+32;
            else if(isalnum(s[i]))
                continue;
            
            else
            {
                s.erase(i,1);
                i--;
            } 
            
        }
        
        for(int i=0,j=s.length()-1;i<j;++i,--j)
            if(s[i]!=s[j])
                return false;
        return true;
    }
};