class Solution {
public:
    vector<int> partitionLabels(string s) {
        int maxind=0,st=0;
        vector<int> ans;
        map<int,int>mp;
        for(int i=0;i<s.length();++i)
        {
            mp[s[i]-'a']=i;
        }
        for(int i=0;i<s.length();++i)
        {
            maxind=max(maxind,mp[s[i]-'a']);
            if(i==maxind)
            {
                 ans.push_back(i-st+1);
                st=i+1;
            } 
        }
        return ans;
    }
};