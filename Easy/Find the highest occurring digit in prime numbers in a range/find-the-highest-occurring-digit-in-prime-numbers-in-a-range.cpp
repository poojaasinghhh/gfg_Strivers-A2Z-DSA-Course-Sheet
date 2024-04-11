//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int maxDigit(int L, int R)  {
        // code here
        vector<int>temp(R+1,1);
        for(int i=2;i*i<=R;i++){
            if(temp[i]==1){
                for(int j=i*i;j<=R;j+=i){
                    temp[j]=0;
                }
            }
        }
        
        vector<int>arr(10,0);
        if(L<2){
            L=2;
        }
        for(int i=L;i<=R;i++){
            if(temp[i]){
                int n=i;
                
                while(n!=0){
                    int ld=n%10;
                    arr[ld]++;
                    n=n/10;
                }
            }
        }
        
        // for(int i=0;i<10;i++){
        //     cout<<arr[i]<<" ";
        // }
        
        int sum = 0;
        for(int i=0;i<10;++i){
            sum += arr[i];
        }
        
        if(sum == 0) return -1;
        
        
        int maxi=0,ans=0;
        bool fl=true;
        for(int i=0;i<10;i++){
            if(arr[i]>=maxi){
                maxi=arr[i];
                ans=i;
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
        cout<<ob.maxDigit(L,R)<<endl;
    }
    return 0;
}

// } Driver Code Ends