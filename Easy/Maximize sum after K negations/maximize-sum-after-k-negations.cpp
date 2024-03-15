//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    long long int maximizeSum(long long int a[], int n, int k)
    {
        // Your code goes here
    
        sort(a,a+n); //sorting the array in ascending order
        
        long long int  sum=0, i;
        
        //iterating over the array
        for(i=0;i<n;i++){
            //if the current element is negative and we still have
            //remaining negative numbers to replace, make it positive
            //and reduce the value of k.
            if(a[i]<0 and k>0){
                a[i]*=-1;
                k--;
            }
        }
        
        sort(a,a+n); //sorting the array again after making changes
        
        //calculating the sum of all elements in the array
        for(i=0;i<n;i++)
        sum+=a[i];
        
        //if k is odd, subtract twice the minimum value in the array
        if(k&1)
        sum-=2*a[0];
        
        return sum; //return the maximum possible sum
    }
};

//{ Driver Code Starts.
int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
         int n, k;
         cin>>n>>k;
         long long int a[n+5];
         for(int i=0;i<n;i++)
         cin>>a[i];
         Solution ob;
         cout<<ob.maximizeSum(a, n, k)<<endl;
     }
	
	return 0;
}
// } Driver Code Ends