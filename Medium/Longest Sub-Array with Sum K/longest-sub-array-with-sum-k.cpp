//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        // Complete the function
        map<long long,int>mpp;
        int maxLen=0;
        long long int sum=0;
        for(int i=0;i<N;i++){
            sum=sum+A[i];
            if(sum==K){
                maxLen=max(maxLen,i+1);
            }
            long long int rem=sum-K;
            if(mpp.find(rem)!=mpp.end()){
                maxLen=max(maxLen,i-mpp[rem]);
            }
            if(mpp.find(sum)==mpp.end()){
                mpp[sum]=i;
            }
        }
        return maxLen;
    } 

};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends