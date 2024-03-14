//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    string reverseWords (string s)
    {
        //code here.
        string ans="",rev="";
        s=s+".";
        for(int i=0;i<s.length();i++){
            ans+=s[i];
            if(s[i]=='.'){

                int j=ans.length()-1;
                while(j!=-1){
                    rev+=ans[j];
                    j--;
                }

                ans="";
            }
            
        }
        
        return rev.substr(1,rev.length());
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout << ob.reverseWords (s) << endl;
    }
    return 0;
}

// Contributed By: Pranay Bansal

// } Driver Code Ends