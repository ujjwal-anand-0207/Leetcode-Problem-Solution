class Solution {
public:
    int fib(int n) {
        if(n==-1)
            return 0;
        else if(n<=1)
            return n;
        return fib(n-2)+fib(n-1);
    }
};