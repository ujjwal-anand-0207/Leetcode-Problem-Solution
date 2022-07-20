class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
        map<char,vector<int>>mp;
        for(int i=0;i<s.length();++i)
            mp[s[i]].push_back(i);
        int ans =0;
        for(int i=0;i<words.size();++i)
        {
            int latest=-1;
            string curr=words[i];
            for(int j=0;j<curr.length();++j)
            {
                auto it=upper_bound(mp[curr[j]].begin(),mp[curr[j]].end(),latest);
                if(it==mp[curr[j]].end())
                {
                    break;
                }
                else
                {
                    latest=*it;
                    if(j==curr.length()-1)
                        ans++;
                }
            }
        }
        return ans;
    }
};