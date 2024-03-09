//{ Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template in C++
 
class Solution 
{
    public:
    //Function to find minimum number of pages.
    int sum(int a[],int n){
        int summ=0;
        for(int i=0;i<n;i++){
            summ+=a[i];
        }
        return summ;
    }
    
    int Students(int a[],int n,int mid){
        int student=1,pages=0;
        
        for(int i=0;i<n;i++){
            
            if(pages+a[i]<=mid){
                pages+=a[i];
            }else{
                student++;
                pages=a[i];
            }
        }
        return student;
    }
    
    int findPages(int A[], int N, int M) 
    {
        //code here
        int low=*max_element(A,A+N),high=sum(A,N),mid,ans;
        if(N<M){
            return -1;
        }
        while(low<=high){
            mid=(low+high)/2;
            
            int stdnt=Students(A,N,mid);
            
            if(stdnt>M){
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
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends