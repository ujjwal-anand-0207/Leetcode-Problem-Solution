class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        map<string,vector<string>>mp;
        for(auto s : strs)
        {
            string temp=s;
            sort(s.begin(),s.end());
            mp[s].push_back(temp);
        }
        for(auto m:mp)
            ans.push_back(m.second);
        return ans;
    }
};