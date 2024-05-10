//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    long long nPr(int n, int r){
        // code here
        long int up=1;
        for(int i=1;i<=n;i++)
        {
            up=up*i;
        }
        long int d=n-r;
        long int down=1;
        for(int j=1;j<=d;j++)
        {
            down=down*j;
        }
        long int ans=up/down;
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, r;
        cin>>n>>r;
        
        Solution ob;
        cout<<ob.nPr(n, r)<<endl;
    }
    return 0;
}
// } Driver Code Ends