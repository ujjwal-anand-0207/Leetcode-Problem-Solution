class Solution {
public:
    string decodeMessage(string key, string message) {
        map<char,char>mp;
        char ch='a';
        for(int i=0;i<key.size();++i)
        {
            if(key[i]!=' ' && mp.find(key[i])==mp.end())
            {
                mp[key[i]]=ch;
                ch++;
            }
        }
        string ans="";
        for(int i=0;i<message.size();++i)
        {
           if(message[i]==' ')
               ans.push_back(' ');
            else 
                ans.push_back(mp[message[i]]);
        }
        return ans;
    }
};