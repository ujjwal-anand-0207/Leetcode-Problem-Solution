class Solution {
public:
    int countAsterisks(string s) {
        int ans =0;
        bool p= true;
        for(int i=0;i<s.size();++i)
        {
            if(s[i]=='|')
                p=!p;
           else if(p && s[i]=='*')
               ans++;
        }
        return ans;
    }
};