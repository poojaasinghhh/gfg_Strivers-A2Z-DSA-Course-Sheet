//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  
    int sum(int a[],int n){
        int summ=0;
        for(int i=0;i<n;i++){
            summ+=a[i];
        }
        return summ;
    }
    
    int split_number(int arr[],int n,int mid){
        int count=1,add_el=0;
        
        for(int i=0;i<n;i++){
            
            if(add_el+arr[i]>mid){
                count++;
                add_el=arr[i];
            }else{
                add_el+=arr[i];
            }
        }
        return count;
    }
    
    int splitArray(int arr[] ,int N, int K) {
        // code here
        
        int low=*max_element(arr,arr+N),high=sum(arr,N),mid,ans;
        
        if(N<K){
            return -1;
        }
        while(low<=high){
            mid=(low+high)/2;
            
            if(split_number(arr,N,mid)>K){
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

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        
        cin>>N>>K;
        int arr[N];
        
        for(int i=0 ; i<N ; i++)
            cin>>arr[i];

        Solution ob;
        cout<<ob.splitArray(arr,N,K);
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends