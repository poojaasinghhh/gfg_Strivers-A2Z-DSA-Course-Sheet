//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  
const int MOD = 1e9+7;
    long long power(long long x,long long n){
        long long ans=1;
        while(n>0){
            if(n%2==0){
                x=(x*x)%MOD;
                n=n/2;
            }
            else{
                ans=(ans*x)%MOD;
                n=n-1;
            }
        }
        return ans;
    }
  
    int countGoodNumbers(long long n) {
        long long odd = n/2;
        long long even = n - n/2;
        
        return (power(5,even)*power(4,odd))%MOD;
}
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        cin >> N;
        Solution ob;

        cout << ob.countGoodNumbers(N) << endl;
    }
}
// } Driver Code Ends