class Solution {
public:
    string toLowerCase(string s) {
        for(int i=0;i<s.length();++i)
        {
            s[i]=(char)tolower(s[i]);
                
        }
        return s;
    }
    
};