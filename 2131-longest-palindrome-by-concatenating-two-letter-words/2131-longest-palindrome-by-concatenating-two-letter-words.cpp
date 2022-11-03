class Solution {
public:
    int longestPalindrome(vector<string>& words) {
     unordered_map<string,int>mp;
     for(string word :words)
        mp[word]++;
    int ans=0,middle=0;
       for(auto i:mp)
       {
           string temp=i.first;
           string s=temp;
           reverse(s.begin(),s.end());
           if(s!=temp)
           {
               
               if(mp.find(s)!=mp.end())
               {
                   ans+=min(mp[s],mp[temp]);
                   
               }  
           }
           else
           {
               ans+=mp[temp];
               if(mp[temp]&1)
               {
                   middle=1;
                   ans-=1;
               }
                   
           }
       }
        return 2*(ans+middle);
    }
};