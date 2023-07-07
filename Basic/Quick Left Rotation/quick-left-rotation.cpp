//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	
	
	public:
	
	void reverseArray(int arr[], int start, int end){
	    end=end-1;
	    int temp;
	    while(start<end){
	        temp=arr[start];
	        arr[start]=arr[end];
	        arr[end]=temp;
	        start++;
	        end--;
	    }
	}
	void leftRotate(int arr[], int k, int n) 
	{ 
	   // Your code goes here
	   k=k%n;
	   reverseArray(arr,0,k);
	   reverseArray(arr,k,n);
	   reverseArray(arr,0,n);
	} 
		 

};

//{ Driver Code Starts.

int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
	    cin >> n;
	    int k;
	    cin >> k;
	    int a[n];
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	        // um[a[i]]++;
	    }


       

        Solution ob;
        ob.leftRotate(a,k,n);
        
        for (int i = 0; i < n; i++) 
        	cout << a[i] << " "; 

	    cout << "\n";
	     
    }
    return 0;
}



// } Driver Code Ends