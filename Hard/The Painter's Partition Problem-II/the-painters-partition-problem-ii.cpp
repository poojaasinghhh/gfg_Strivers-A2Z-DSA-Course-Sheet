//{ Driver Code Starts
// driver code

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
  
    long long int sum(int a[],int n){
        long long int summ=0;
        for(int i=0;i<n;i++){
            summ+=a[i];
        }
        return summ;
    }
    
    int painters_assign(int a[],int n,long long int mid){
        int count=1;
        long long int painter_work=0;
        for(int i=0;i<n;i++){
            if(painter_work+a[i]>mid){
                count++;
                painter_work=a[i];
            }else{
                painter_work+=a[i];
            }
        }
        return count;
    }
    long long minTime(int arr[], int n, int k)
    {
        // code here
        // return minimum time
        
        long long int low=*max_element(arr,arr+n),high=sum(arr,n),mid,ans;
        
        while(low<=high){
            mid=(low+high)/2;
            
            if(painters_assign(arr,n,mid)>k){
                low=mid+1;
            }else{
                ans=mid;
                high=mid-1;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int k,n;
		cin>>k>>n;
		
		int arr[n];
		for(int i=0;i<n;i++)
		    cin>>arr[i];
		Solution obj;
		cout << obj.minTime(arr, n, k) << endl;
	}
	return 0;
}
// } Driver Code Ends