class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int a[27]={0};
        for(int i=0;i<allowed.length();++i)
        {
            a[allowed[i]-'a']++;
        }
        
        int ans=0;
        for(int i=0;i<words.size();++i)
        {
            bool c=true;
            for(int j=0;j<words[i].length();++j)
            {
                
               if(a[words[i][j]-'a']==0)
                {
                    c=false;
                    break;
                }
                
            }
            if(c)
                    ans++;
        
        }
        return ans;
    }
};