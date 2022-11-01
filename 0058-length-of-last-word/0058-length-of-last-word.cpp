class Solution {
public:
    int lengthOfLastWord(string s) {
        if(s.length()==0)
            return 0;
        if(s.length()==1 && s[0]!=' ')
            return 1; 
        int n=s.length()-1;
        int count=0;
        while(s[n]==' ')
            n--;
        while(n>=0 && s[n]!=' ')
        {
            count++;
            n--;
        }
        return count;
    }
};