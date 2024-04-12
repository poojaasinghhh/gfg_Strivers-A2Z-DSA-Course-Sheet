//{ Driver Code Starts


// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int primeSetBits(int L, int R){
        // code here
        int n=R,cnt=0;
        while(n!=0){
            cnt++;
            // cout<<n<<" "<<cnt<<endl;
            n=n>>1;
            
        }
        
        vector<int> prime(cnt+1,1);
        
        for(int i=2;i*i<=cnt;i++){
            if(prime[i]==1){
                for(int j=i*i;j<=cnt;j+=i){
                    prime[j]=0;
                }
            }
        }
        
        // for(int i=0;i<=cnt;i++){
        //     cout<<prime[i]<<" ";
        // }
        
        int ans=0;
        // cout<<endl;
        for(int i=L;i<=R;i++){
            int bits=0;
            int num=i;
            // cout<<num<<endl;
            while(num!=0){
                 bits += num & 1; 
                 num >>= 1;
            }
            
            if(bits>=2 && prime[bits]==1 ){
                ans++;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int L, R;
        cin >> L >> R;
        Solution ob;
        cout<<ob.primeSetBits(L,R)<<endl;
    }
    return 0;
}

// } Driver Code Ends