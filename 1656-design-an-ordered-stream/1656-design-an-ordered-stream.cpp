class OrderedStream {
public:
    vector<string> s;
    int size;
    int ptr=0;
    OrderedStream(int n) {
        s.resize(n);
        size=n;
    }
    
    vector<string> insert(int idkey, string value) {
        s[idkey-1]=value;
        vector<string>ans;
        while(ptr<size)
        {
            if(s[ptr]!="")
                ans.push_back(s[ptr]);
                else 
                    break;
            ptr++;
        }
        return ans;
    }
};

/**
 * Your OrderedStream object will be instantiated and called as such:
 * OrderedStream* obj = new OrderedStream(n);
 * vector<string> param_1 = obj->insert(idKey,value);
 */