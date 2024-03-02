//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(vector<int> arr, int n) {
	    // code here
	    long long sufix=1,prefix=1,maxxi=INT_MIN;
	    
	    for(int i=0;i<n;i++){
	        
	        if(prefix==0){
	            prefix=1;
	        }
	        if(sufix==0){
	            sufix=1;
	        }
	        
	        prefix*=arr[i];
	        sufix*=arr[n-i-1];
	        
	        maxxi=max(maxxi,max(prefix,sufix));
	    }
	    return maxxi;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        vector<int> arr(n);
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends