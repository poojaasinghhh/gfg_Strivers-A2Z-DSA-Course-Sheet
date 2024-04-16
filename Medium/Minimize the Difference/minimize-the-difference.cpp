//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends

class Solution {
  public:
    int minimizeDifference(int n, int k, vector<int> &arr) {
        // code here
         vector<int> rightmax(n,0), rightmin(n,0);
       rightmin[n-1]=arr[n-1];
       rightmax[n-1]=arr[n-1];
       for(int i=n-2; i>=0; i--) {
           rightmax[i]=max(rightmax[i+1],arr[i]);
           rightmin[i]=min(rightmin[i+1],arr[i]);
           
       }
           int j=k-1;   int i=0;
           int mn=INT_MAX,mx=INT_MIN;
           int ans=INT_MAX;
       while(j<n) {
           if(i!=0) {
              mn=min(arr[i-1],mn);
              mx=max(arr[i-1],mx);
           }
           int temp1=mn, temp2=mx;
           
           if(j!=n-1) {
               temp1=min(temp1,rightmin[j+1]);
               temp2=max(temp2,rightmax[j+1]);
           }
           ans=min(ans,abs(temp2-temp1));
           j++;
           i++;
       }
       
       return ans;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int n;
        scanf("%d",&n);
        
        
        int k;
        scanf("%d",&k);
        
        
        vector<int> arr(n);
        Array::input(arr,n);
        
        Solution obj;
        int res = obj.minimizeDifference(n, k, arr);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends