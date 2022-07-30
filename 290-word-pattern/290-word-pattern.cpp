class Solution {
public:
    bool wordPattern(string pattern, string s) {
    unordered_map<char,string>mp;
        vector<string> v;
        stringstream ss(s);
        string word;
        
        while(ss>>word)
            v.push_back(word);
        int size=pattern.length();
        if(size!=v.size())
            return false;
        for(int i=0;i<size;++i)
        {
            char ch=pattern[i];
            if(mp.find(ch)!= mp.end())
            {
                if(mp[ch]!=v[i])
                    return false;
                
            }
            else{
            for(auto it:mp)
                   if( it.second==v[i])
                       return false;
             mp[ch]=v[i];
        }}
       
        return true;
    }
    
};