//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        // code here
        for(int i=1;i<=n;i++){
            int start=65;
            for(int j=0;j<n-i;j++){
                cout<<" ";
            }
            for(int j=1;j<=i;j++){
                cout<<char(start);
                start=start+1;
            }
            start=start-1;
            while(start>65){
                start=start-1;
                cout<<char(start);
            }
            printf("\n");
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends