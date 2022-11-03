class Solution {
public:
    int mySqrt(int x) {
       int count=0;
        int i=1;
        while(x>0)
        {
            x=x-i;
            i+=2;
            count++;
        }
        if(x==0)
            return count;
        else 
            return count-1;
    }
};