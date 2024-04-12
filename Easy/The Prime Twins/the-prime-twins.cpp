//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    vector<int> primeTwins(int L, int R) {
        // code here
         vector<int> prime(R+1,1);
   	    
   	    for(int i=2;i*i<=R;i++){
   	        if(prime[i]==1){
   	            for(int j=i*i;j<=R;j+=i){
   	                prime[j]=0;
   	                
   	            }
   	        }
   	    }
   	    
   	    prime[0]=0;
   	    prime[1]=0;
   	    
   	    int l=L,h=R;
   	    
   	    vector<int>ans;
   	    
   	    while(l+2<=h){
   	        if(prime[l]==1 && prime[l+2]){
   	            ans.push_back(l);
   	            ans.push_back(l+2);
   	            return ans;
   	        }
   	        l++;
   	    }
   	    
   	    ans.push_back(-1);
   	    
   	    return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int L,R;
        cin >> L >> R;
        Solution ob;
        vector<int>ans=ob.primeTwins(L,R);    
        for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}

// } Driver Code Ends