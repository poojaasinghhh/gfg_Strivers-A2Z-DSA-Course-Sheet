//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here 
        S="."+S;
        string ans="";
        int afterdot=S.length();
        int beforedot=-1;
        for(int i=S.length()-1;i>=0;i--){
            if(S[i]=='.'){
                beforedot=i;
                // cout<<beforedot<<" ";
                ans+=S.substr(beforedot,afterdot-beforedot);
                //  cout<<afterdot<<endl;
                afterdot=beforedot;
            }
        }
        ans=ans.substr(1,ans.length()-1);
        return ans;
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends