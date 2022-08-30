class Solution {
public:
    int balancedStringSplit(string s) {
        int ans =0;
        int nr=0,nl=0;
        for(int i=0;i<s.length();++i)
        {
            if(s[i]=='R')
                nr++;
            else if(s[i]=='L')
                nl++;
            if(nr==nl && nr!=0 && nl!=0)
            {
                ans++;
                nr=0;nl=0;
            }
        }
        return ans;
    }
};