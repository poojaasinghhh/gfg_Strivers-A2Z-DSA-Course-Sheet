//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    int findPeakElement(vector<int>& a) 
    {
        // Code here.
          int l=0, r=a.size()-1;
        int ans=0;
        
        while(l<=r){
            int mid = (l+r)/2;
            
            ans = max(ans, a[mid]);
            
            if(a[mid]>a[r]){
                r=mid-1;
            } else{
                l=mid+1;
            }
        }
        
        return ans;
    }
};



//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n;
    	cin >> n;
    	vector<int>a(n);
    	for(int i = 0; i < n; i++)
    		cin>>a[i];
    	Solution ob;
    	int ans = ob.findPeakElement(a);
    	cout << ans << "\n";
    }
	return 0;
}


// } Driver Code Ends