class Solution {
public:
    string interpret(string command) {
        string ans;
        for(int i=0;i<command.length()-1;++i)
        {
            if(command[i]=='G')
                ans+="G";
            else if(command[i]=='(' && command[i+1]==')')
                ans+="o";
            else if(command[i]=='('&& command[i+1]=='a')
            {
                ans+="al";
                i++;
                i++;
                i++;
            }
        }
        if(command[command.length()-1]=='G')
            ans+="G";
        return ans;
    }
};