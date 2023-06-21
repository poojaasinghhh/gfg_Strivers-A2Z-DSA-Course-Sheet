//{ Driver Code Starts
// Initial Template for C++

// {Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
// } Driver Code Ends


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int dataTypeSize(string str) {
        // your code here
        char ch=tolower(str[0]);
        if(ch=='c'){
            return 1;
        }else if(ch=='i'){
            return 4;
        }else if(ch=='l'){
            return 8;
        }else if(ch=='f'){
            return 4;
        }else{
            return 8;
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        cout << ob.dataTypeSize(str);
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends