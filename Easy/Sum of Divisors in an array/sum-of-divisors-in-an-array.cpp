//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    vector<int> sumOfProperDivisors(int arr[], int N) {
        // code here
        int maxi=*max_element(arr,arr+N);
        vector<int>temp(maxi+1,1);
        temp[1]=0;
        
        for(int i=2;i<=maxi;i++){
            for(int j=i*2;j<=maxi;j+=i){
                temp[j]=temp[j]+i;
            }
        }
        
        
        vector<int>ans;
        
        for(int i=0;i<N;i++){
            ans.push_back(temp[arr[i]]);
        }
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++) cin >> arr[i];
        Solution ob;
        vector<int> ans = ob.sumOfProperDivisors(arr, N);
        for (int i = 0; i < ans.size(); i++) cout << ans[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends