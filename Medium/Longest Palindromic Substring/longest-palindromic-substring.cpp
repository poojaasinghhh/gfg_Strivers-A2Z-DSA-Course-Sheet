//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
   string longestPalindrome(string s) {
    if (s.length() <= 1) {
        return s;
    }
    string ans = "";
    int high, low;
    for (int i = 0; i < s.length(); i++) {
        low = i;
        high = i;

        while (s[low] == s[high]) {
            low--;
            high++;

            if (low == -1 || high >= s.length()) {
                break;
            }
        }

        string found = s.substr(low + 1, high - low - 1);

        if (found.length() > ans.length()) {
            ans = found;
        }

        low = i - 1;
        high = i;

        while (s[low] == s[high]) {
            low--;
            high++;

            if (low == -1 || high >= s.length()) {
                break;
            }
        }

        found = s.substr(low + 1, high - low - 1);

        if (found.length() > ans.length()) {
            ans = found;
        }
    }
    return ans;
}
};

//{ Driver Code Starts.



int main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        Solution ob;
        cout<<ob.longestPalindrome(S)<<endl;
    }
    return 0;
}

// } Driver Code Ends