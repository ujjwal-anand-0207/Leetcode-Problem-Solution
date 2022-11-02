class Solution {
public:
    int minMutation(string start, string end, vector<string>& bank) {
        int size=bank.size();
        vector<char>available={'A','C','G','T'};
        unordered_set<string>st;
        for(int i=0;i<size;++i)
            st.insert(bank[i]);
        if(st.find(end)==st.end())
            return -1;
        int ans=0;
        queue<string>q;
        unordered_set<string>vis;
        q.push(start);
        vis.insert(start);
        while(!q.empty())
        {
            int n=q.size();
            while(n--)
            {
                string curr=q.front();
                q.pop();
                if(curr==end)
                    return ans;
                
                for(int i=0;i<8;++i)
                {
                    char o=curr[i];
                    for(int j=0;j<4;++j)
                    {
                        curr[i]=available[j];
                        
                        if(st.find(curr)!=st.end())
                        {
                            if(vis.find(curr)==vis.end())
                            {
                                 q.push(curr);
                                 vis.insert(curr);
                            }
                               
                        }
                    }
                    curr[i]=o;
                }
            }
            ans++;
        }
        return -1;
    }
};