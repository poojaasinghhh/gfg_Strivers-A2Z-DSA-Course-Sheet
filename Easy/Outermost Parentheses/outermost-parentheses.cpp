//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    string removeOuter(string& s) {
        // code here
        string result="";
        int count=0,fl=1;
        for(int i=0;i<s.length();i++){
            
            if(s[i]=='('){
                count++;
            }else{
                count--;
            }
            
            if(count==0 && fl==0){
                fl=1;
                continue;
            }
            
            if(count==1 && fl==1){
                fl=0;
                continue;
            }
            result+=s[i];
        }
        return result;
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

        cout << obj.removeOuter(s) << "\n";
    }
}
// } Driver Code Ends