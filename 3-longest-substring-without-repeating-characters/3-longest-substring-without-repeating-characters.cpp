class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length()==0)
            return 0;
        int winsize=0;
        for(int i=0;i<s.length();++i)
        {
             int a[256]={0};
             int size=0;
             for(int j=i;j<s.length();++j)
             {
                
                 
                     a[s[j]]++;
                  if(a[s[j]]<=1)
                      size++;
                 else
                 {
                     break;
                 }
                 
                 
             }
            winsize=max(winsize,size);
        }
        return winsize;
    }
};