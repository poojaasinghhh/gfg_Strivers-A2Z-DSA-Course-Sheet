//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
long long int maxSum(int arr[], int n);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;++i)
			cin>>arr[i];
		cout<<maxSum(arr,n)<<endl;
	}
	return 0;
}
// } Driver Code Ends


long long int maxSum(int arr[], int n)
{
    sort(arr,arr+n);
    
    
    int left=0,right=n-1;
    
    long long int sum=0;
    int cnt=0;
    while(left<right){
        // cout<<arr[right]<<" "<<arr[left]<<endl;
        sum+=(arr[right]-arr[left]);
        sum+=(arr[right]-arr[left+1]);
        right--;
        left++;

    }

    sum+=arr[left]-arr[0];
    
    return sum;
}