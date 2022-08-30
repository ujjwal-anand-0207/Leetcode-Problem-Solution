class Solution {
public:
    string sortSentence(string s) {
        map<int, string>mp;
        int tem;
        string temp,ans="";
        stringstream ss(s);
        int k=0;
            while(ss >> temp)
            {
                string t=temp.substr(0,temp.length()-1);
               
                tem=temp[temp.length()-1]-48;
                mp[tem]=t;
            }
        for(auto i=mp.begin() ;i!=mp.end();++i)
        {
           ans+=i->second;
            ans+=" ";
           
        }
        return ans.substr(0,ans.length()-1);
    }
};