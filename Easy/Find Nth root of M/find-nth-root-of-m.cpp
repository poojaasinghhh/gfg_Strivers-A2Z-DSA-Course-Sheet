//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int ans(int mid,int n,int m){
	    long long int ans=1;
	    for(int i=1;i<=n;i++){
	        ans=ans*mid;
	        if(ans>m){
	            return 2;
	        }
	    }
	    if(ans==m){
	        return 0;
	    }else{
	        return 1;
	    }
	}
	int NthRoot(int n, int m)
	{
	    // Code here.
	    int low=1,high=m,mid;
	    while(low<=high){
	        mid=(low+high)/2;
	        
	        if(ans(mid,n,m)==0){
	            return mid;
	        }else if(ans(mid,n,m)==2){
	            high=mid-1;
	        }else{
	            low=mid+1;
	        }
	    }
	    return -1;
	    
	}  
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		Solution ob;
		int ans = ob.NthRoot(n, m);
		cout << ans << "\n";
	}  
	return 0;
}
// } Driver Code Ends