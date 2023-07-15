//{ Driver Code Starts
#include <bits/stdc++.h>


using namespace std;




// } Driver Code Ends

class Solution{
  public:
    int Countpair(int arr[], int n, int sum){
        
        // Complete the function
        sort(arr, arr + n);
        int left = 0, right = n - 1, sum_array = 0, count = 0;
        while (left < right) {
            sum_array = arr[left] + arr[right];
             if (sum_array < sum) {
                left++;
            } else if (sum_array > sum) {
                right--;
            } else {
                count++;
                left++;
                right--;
            }
        }
        if(count==0){
            return -1;
        }else{
            return count;
        }

    
        
    }
};

//{ Driver Code Starts.
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        
        int n;
        cin>>n;
        int arr[n+1];
        
        for(int i=0;i<n;i++)
        cin>>arr[i];

        int sum;
        cin>>sum;
        Solution obj;
        cout << obj.Countpair(arr, n, sum) << endl;
        
    }
	return 0;
}

// } Driver Code Ends