//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
    // Function for reverse
  private:long long int reverseNum(int N){
      int reverse=0;
            while(N!=0){
                int seperate = N%10;
                reverse = (reverse*10)+seperate;
                N/=10;
            }
    return reverse;
  }
    
  public:
    long long isSumPalindrome(long long n){
        
        for(int i=0;i<=5;i++){//run loop only 5 times
        
            if(n==reverseNum(n)){// compare 23 == 32, 55 == 55
                return n;
            }
            n=n+reverseNum(n);// add 23+32=55
        }
        return -1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        Solution ob;
        cout<<ob.isSumPalindrome(n)<<endl;
    }
    return 0;
}

// } Driver Code Ends