//{ Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution {
public:
	int DivCountSum(int n){
	    // Code here
	    int sum=0;
	    for(int i=1;i<=n;i++)
	        sum+=(n/i);
	    return sum;
	}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution obj;
		int ans = obj.DivCountSum(n);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends