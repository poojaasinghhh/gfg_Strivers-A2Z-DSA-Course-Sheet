//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    vector<int> sixyPrime(int L, int R) {
        // code here
        vector<int> prime(R+1,1);
        
        for(int i=2;i*i<=R;i++){
            if(prime[i]==1){
                for(int j=i*i;j<=R;j+=i){
                    prime[j]=0;
                }
            }
        }
        if(L<2){
            L=2;
        }
        int low=L,high=R;
        vector<int>ans;
        while(low+6<=high){
            if(prime[low]==1 && prime[low+6]==1 ){
                ans.push_back(low);
                ans.push_back(low+6);
                low++;
            }else{
                low++;
            }
        }
        
        if(ans.size()==0){
            ans.push_back(-1);
        }
        
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
        vector<int>ans=ob.sixyPrime(L,R);    
        for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}

// } Driver Code Ends