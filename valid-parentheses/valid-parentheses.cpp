class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        bool ans=true;
        for(int i=0;i<s.length();++i)
        {
            if(s[i]=='(' || s[i]=='[' ||s[i]=='{')
            {
                st.push(s[i]);
            }
            else
            {
                if(st.empty())
                {
                    ans=false;
                    break;
                }
               if(s[i]==')' && st.top()=='(')
                {
                    st.pop();
                }
                else  if(s[i]=='}' && st.top()=='{')
                {
                    st.pop();
                }
               
                
               else if(s[i]==']' && st.top()=='[')
                {
                    st.pop();
                }
                else
                {  
                    ans=false;
                    break;
                }
            }
        }
       if(!st.empty())
           ans=false;
        return ans;
    }
};