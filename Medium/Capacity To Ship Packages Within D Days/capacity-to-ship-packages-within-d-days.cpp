//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
  
    int sum(int arr[],int n){
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        return sum;
    }
    
    int possible(int arr[],int n,int mid){
        int days=1,sum=0;
        for(int i=0;i<n;i++){
            if(arr[i]+sum>mid){
                sum=arr[i];
                days+=1;
            }else{
                sum+=arr[i];
            }
        }
        return days;
    }
    
    int leastWeightCapacity(int arr[], int N, int D) {
        // code here
        int low=*max_element(arr,arr+N),high=sum(arr,N),mid,ans=-1;
        
        while(low<=high){
            mid=(low+high)/2;
            
            if(possible(arr,N,mid)<=D){
                ans=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,D;
        cin>>N;
        
        int arr[N];
        for(int i=0; i<N; i++)
            cin>>arr[i];
        cin>>D;

        Solution ob;
        cout << ob.leastWeightCapacity(arr,N,D) << endl;
    }
    return 0;
}
// } Driver Code Ends