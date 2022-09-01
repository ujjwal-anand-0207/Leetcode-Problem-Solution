class Solution {
public:
    int countPoints(string rings) {
        int a[11]={1,1,1,1,1,1,1,1,1,1,1};
        int ans=0;
        for(int i=0;i<rings.length()-1;i+=2)
        {
            
            if(rings[i]=='R' && a[rings[i+1]-48]%2!=0)
               a[rings[i+1]-48]*=2;
          else if(rings[i]=='G' && a[rings[i+1]-48]%3!=0)
               a[rings[i+1]-48]*=3;
            else if(rings[i]=='B' && a[rings[i+1]-48]%5!=0)
                a[rings[i+1]-48]*=5;
        }
        for(int i=0;i<10;++i)
        {
            
            if(a[i]%2==0 &&a[i]%3==0 && a[i]%5==0)
                ans ++;
        }
        return ans;
    }
};