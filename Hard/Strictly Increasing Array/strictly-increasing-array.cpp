//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:

    int min_operations(vector<int>& nums) {
        // Code here
        
        int n=nums.size();
        if(n==1){
            return 0;
        }
        int j=0;
        int i=1;
        
        vector<int>temp(n,1);
        int maxx=1;
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                if(nums[i]>nums[j] && (i-j)<=nums[i]-nums[j]){
                    temp[i]=max(temp[j]+1,temp[i]);
                    maxx=max(temp[i],maxx);
                }
            }
        }
        
        return n-maxx;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (int i = 0; i < n; i++)
            cin >> nums[i];
        Solution ob;
        int ans = ob.min_operations(nums);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends