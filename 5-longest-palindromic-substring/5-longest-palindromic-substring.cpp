class Solution {
public:
    string longestPalindrome(string s) {
     int l,h;
     int start=0;
     int end=1;
     int windowsize=INT_MIN;
     for(int i=1;i<s.size();i++)
     {
         l=i-1;
         h=i;
         while(l>=0 && h<s.size() && s[l]==s[h])
         {
         
         if(h-l+1>end)
         {
             start=l;
             end=(h-l+1);
         }
             l--;
             h++;
         }
         l=i-1;
         h=i+1;
         while(l>=0 && h<s.size() && s[l]==s[h])
         {
         if(h-l+1>end)
         {
             end=(h-l+1);
             start=l;
            
         }
             l--;
             h++;
         
    
         }
     }
        return s.substr(start,end);
    }
};