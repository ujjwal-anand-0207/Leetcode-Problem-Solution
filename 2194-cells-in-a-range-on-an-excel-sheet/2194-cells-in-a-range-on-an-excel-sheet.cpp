class Solution {
public:
    vector<string> cellsInRange(string s) {
        int start,end;
        vector<string>ans;
        char st,e;
        st=s[0];
        
        start=s[1]-48;
        e=s[3];
        end=s[4]-48;
        
        for(char i=st;i<=e;++i)
        {
            
          
            for(int j=start;j<=end;++j)
            {
                  string a="";
                
                a.push_back(i);
                a.push_back((char)(j+48));
                ans.push_back(a);
            }
            
        }
        return ans;
    }
};