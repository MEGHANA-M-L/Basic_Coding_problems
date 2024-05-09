//Write a program to find the sum of the given series 1+2+3+ . . . . . .(N terms) 
/*Complete the function seriesSum() which takes single integer n, as input parameters and returns an integer denoting the answer. The result size may be large, so return a container that accommodates a 64-bit integer. You don't need to print the answer or take inputs.

Expected Time Complexity: O(1)
Expected Auxiliary Space: O(1)

Constraints:
1 <= N <= 109
  */
//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
// } Driver Code Ends
class Solution {
  public:
    long long seriesSum(int n) {
        // code here
        long long l=n;
        return (l*(l+1))/2;
    }
};
//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int n;
        scanf("%d",&n);
        
        Solution obj;
        long long res = obj.seriesSum(n);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends
