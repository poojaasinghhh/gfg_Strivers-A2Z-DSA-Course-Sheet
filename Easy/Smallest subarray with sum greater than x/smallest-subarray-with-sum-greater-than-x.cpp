//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:

    int smallestSubWithSum(int arr[], int n, int x)
    {
        // Your code goes here   
        
        long long int sum=0;
        int minLength=INT_MAX;
        
        int right=0,left=0;
        
        
        while(right<n){
            sum+=arr[right];
            while(left<=right && sum>x){
                minLength=min(minLength,right-left+1);
                sum-=arr[left];
                left++;
            }
            

            right++;
            
            
        }
        if(minLength==INT_MAX){
            return 0;
        }
        return minLength;
    }
};

//{ Driver Code Starts.

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution obj;
		cout<<obj.smallestSubWithSum(a,n,x)<<endl;
	}
	return 0;
}
// } Driver Code Ends