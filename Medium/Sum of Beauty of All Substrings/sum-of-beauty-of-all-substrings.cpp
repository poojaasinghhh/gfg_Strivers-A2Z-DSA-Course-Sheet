//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
int beautySum(string s){

                int ans = 0;

        for(int i = 0; i<s.length(); i++){

            int mp[26] = {0};

            for(int j = i; j<s.length(); j++){

                mp[s[j]- 'a']++;

                int m = INT_MAX;

                int M = INT_MIN;

                for(int i = 0; i<26; i++){

                    if(mp[i] != 0){

                        m = min(m, mp[i]);

                        M = max(M, mp[i]);

                    }

                }

                ans += M - m;

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
        string s;
        cin >> s;
        Solution obj;
        cout << obj.beautySum(s) << endl;
    }
    return 0;
}
// } Driver Code Ends