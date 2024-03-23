//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> Series(int n) {
        // Code here
            vector<int>ans;
            ans.push_back(0);
            ans.push_back(1);
            
            int a=0;
            int b=1;
            for(int i=1;i<n;i++){
                int c=(a+b)%1000000007;
                a=b;
                b=c;
                ans.push_back(c);
            }
            
            return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution obj;

        vector<int> ans = obj.Series(n);
        for (auto x : ans) cout << x << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends