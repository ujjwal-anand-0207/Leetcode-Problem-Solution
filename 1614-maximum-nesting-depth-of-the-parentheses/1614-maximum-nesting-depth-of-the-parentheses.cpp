class Solution {
public:
    int maxDepth(string s) {
        int md=0,cd=0;
        for(int i=0;i<s.length();++i)
        {
            if(s[i]=='(')
            {
                cd++;
                md=max(md,cd);
            }
            else if(s[i]==')')
            {
                cd--;
            }
        }
        return md;
    }
};