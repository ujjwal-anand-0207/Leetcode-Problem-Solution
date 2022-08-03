class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        
        map<string,int>mp;
        vector<string>ans;
        if(s.size()<10)
            return ans;
        for(int i=0,j=i+9;j<s.length();++i,++j)
        {
            string temp=s.substr(i,10);
                mp[temp]++;
        }
        for(auto m:mp)
        {
            if(m.second>1)
                ans.push_back(m.first);
        }
        return ans;
    }
};