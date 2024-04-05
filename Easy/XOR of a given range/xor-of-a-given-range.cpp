//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    
    int xorr(int a){
        if(a%4==1){
            return 1;
        }else if(a%4==2){
            return a+1;
        }else if(a%4==3){
            return 0;
        }else{
            return a;
        }
    }
    
    int getXor(vector<int>&nums, int a, int b){
        // Code here
         int ans=0;
       for(int i=a;i<=b;i++) ans=ans^nums[i];
       return ans;

    }
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--){
        int n, a, b;
        cin >> n >> a >> b;
        vector<int>nums(n);
        for(int i = 0; i < n; i++)cin >> nums[i];
        if(a > b)swap(a, b);
        Solution obj;
        int ans = obj.getXor(nums, a, b);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends