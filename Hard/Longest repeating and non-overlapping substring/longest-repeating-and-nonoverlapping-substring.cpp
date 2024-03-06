//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
string longestSubstring(string s, int n) {
    int dp[n+1][n+1];
    memset(dp, 0, sizeof(dp));
    string result = "-1";
    int resultLength = 0;

    // Build the table in bottom-up manner
    for (int i = 1; i <= n; i++) {
        for (int j = i+1; j <= n; j++) {
            // If characters match and the substring is not overlapping
            if (s[i-1] == s[j-1] && dp[i-1][j-1] < (j - i)) {
                dp[i][j] = dp[i-1][j-1] + 1;
                // Update result if this substring is longer than the previous result
                if (dp[i][j] > resultLength) {
                    resultLength = dp[i][j];
                    result = s.substr(i - resultLength, resultLength);
                }
            } else {
                dp[i][j] = 0;
            }
        }
    }
    return result;
}

};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        string S;

        cin >> N;
        cin >> S;

        Solution ob;
        cout << ob.longestSubstring(S, N) << endl;
    }
    return 0;
}
// } Driver Code Ends