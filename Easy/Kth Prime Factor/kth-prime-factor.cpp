//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int kthPrime(int n, int k){
        // code here
        int cnt=0;
        int ans=-1,fl=0;
        
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                
                while(n%i==0){
                    n=n/i;
                    cnt++;
                    // cout<<cnt<<" E"<<i<<" ";
                if(cnt==k){
                    ans=i;
                    fl=1;
                    // cout<<cnt<<"C "<<ans<<endl;
                    break;
                }
                }
            }
            
            if(fl==1){break;}
        }
        
        if(n!=1){
            cnt++;
            if(cnt==k){
                ans=n;
                // cout<<cnt<<"D "<<ans<<endl;
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
        int n, k;
        cin>>n>>k;
        
        Solution ob;
        cout<<ob.kthPrime(n, k)<<"\n";
    }
    return 0;
}
// } Driver Code Ends