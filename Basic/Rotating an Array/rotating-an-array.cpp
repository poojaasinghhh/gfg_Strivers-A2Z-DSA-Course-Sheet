//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

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
    void leftRotate(int arr[], int n, int d) {
        // code here
	   reverseArray(arr,0,d);
	   reverseArray(arr,d,n);
	   reverseArray(arr,0,n);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, d;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cin >> d;
        Solution ob;
        ob.leftRotate(arr, n, d);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}



// } Driver Code Ends