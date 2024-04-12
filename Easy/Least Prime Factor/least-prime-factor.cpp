//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    vector<int> leastPrimeFactor(int n) {
        // code here
        
        vector<int>prime(n+1,1);
        
        for(int i=2;i<=n;i++){
            if(prime[i]==1){
                for(int j=i;j<=n;j+=i){
                    if(prime[j]==1){
                    prime[j]=i;
                    }
                    
                }
            }
        }
        
        vector<int>ans;
        prime[0]=0;
        
        for(int i=0;i<=n;i++){
            ans.push_back(prime[i]);
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
        Solution ob;
        vector<int>ans = ob.leastPrimeFactor(n);
        for(int i=1;i<=n;i++)cout<<ans[i]<<" ";
        cout<<endl;  
    }
    return 0;
}

// } Driver Code Ends