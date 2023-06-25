//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    long long reversedBits(long long X) {
        // code here
        int arr[32]={0};
        long long ans=0;
        for(int i=0;i<32;i++){
            arr[i]=X%2;
            ans=ans+arr[i]*pow(2,31-i);
            X=X/2;
            if(X==0){
                break;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long X;
        
        cin>>X;

        Solution ob;
        cout << ob.reversedBits(X) << endl;
    }
    return 0;
}
// } Driver Code Ends