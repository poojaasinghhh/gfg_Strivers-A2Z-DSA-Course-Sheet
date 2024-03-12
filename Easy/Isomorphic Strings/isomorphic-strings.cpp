//{ Driver Code Starts
// C++ program to check if two strings are isomorphic


#include<bits/stdc++.h>


using namespace std;
#define MAX_CHARS 256

// } Driver Code Ends
class Solution
{
    public:
    bool containsValue(map<char, char>& myMap, char value) {
    for (const auto& pair : myMap) {
        if (pair.second == value) {
            return true;
        }
    }
    return false;
}
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string str1, string str2)
    {
        
        // Your code here
        map<char,char>ans;
        
        int n1=str1.length();
        int n2=str2.length();
        
        if(n1!=n2){
            return false;
        }
        char org,rep;
        for(int i=0;i<n1;i++){
            org=str1[i];
            rep=str2[i];
            
            if(ans.find(org)==ans.end()){
                if(!containsValue(ans, rep)){
                    ans[str1[i]]=str2[i];
                }else{
                    return false;
                }
            }else{
                char ch=ans[org];
                if(ch!=rep){
                    return false;
                }
            }
        }
        return true;
    }
};

//{ Driver Code Starts.

// Driver program
int main()
{
    int t;
    cin>>t;
    string s1,s2;
    while (t--) {
        cin>>s1;
        cin>>s2;
        Solution obj;
        cout<<obj.areIsomorphic(s1,s2)<<endl;
    }
    
    return 0;
}
// } Driver Code Ends