//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    long maximumSumSubarray(int k, vector<int> &Arr , int N){
        vector<long>pf;
        pf.push_back(Arr[0]);
        for(int i=1;i<Arr.size();++i)
        {
            pf.push_back(pf[i-1]+Arr[i]);
        }
        long sum =pf[k-1];
        long curr=sum;
        for(int i=k;i<pf.size();i++)
        {
           sum=max(sum,pf[i]-pf[i-k]);
        }
        return sum;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends