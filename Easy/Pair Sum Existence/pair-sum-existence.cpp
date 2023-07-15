//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

int sumExists(int arr[], int n, int sum);
    
int main() {
	
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    
	    int arr[n];  //array of size n
            
        for(int i = 0; i < n; i++)
            cin>>arr[i]; //Input the array
             
        int sum; 
        cin>>sum;
          
        cout<< sumExists(arr, n, sum) <<endl;    
            
	}
}
// } Driver Code Ends


//User function Template for C++

int sumExists(int arr[], int n, int sum){
    
    
    //code here
    sort(arr,arr+n);
    int left=0,right=n-1,sum_array=0;
    while(left<right){
        sum_array=arr[left]+arr[right];
        if(sum_array<sum){
            left++;
        }else if(sum_array>sum){
            right--;
        }else{
            return 1;
        }
    }
    return 0;
    
    
    
}