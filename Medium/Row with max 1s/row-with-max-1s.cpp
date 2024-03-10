//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
    int lower_bound(vector<int>arr,int m){
        int index=m;
        int low=0,high=m-1,mid;
        while(low<=high){
            mid=(low+high)/2;
            if(arr[mid]>=1){
                index=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return m-index;
    }
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    int max_count=0;
	    int index=-1;
	    for(int i=0;i<n;i++){
	       
	        if(lower_bound(arr[i],m)>max_count){
	            index=i;
	            max_count=lower_bound(arr[i],m);
	        }
	    }
	    return index;
	}

};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector< vector<int> > arr(n,vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin>>arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends