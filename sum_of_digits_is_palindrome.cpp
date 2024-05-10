//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int isDigitSumPalindrome(int n) {
        // code here
        int val=0;
        while(n>0)
        {
            //sum of digits
            int digit=n%10;
            val+=digit;
            n=n/10;
        }
        //val is the sum of digits
       // cout<<val<<endl;
        int temp=val;//store the value of sum int ot he temp;
        int res=0;
        while(val>0)
        {
            int digit=val%10;
            res=res*10+digit;
            val=val/10;
        }
      // cout<<temp<<res<<endl; 
       
        if(temp==res)
            return 1;
        return 0;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isDigitSumPalindrome(N) << "\n";
    }
}

// } Driver Code Ends