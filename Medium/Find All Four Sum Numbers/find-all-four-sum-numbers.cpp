//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &arr, int k) {
        // Your code goes here
        sort(arr.begin(),arr.end());
        vector<vector<int>>ans;
        int n=arr.size();
        for(int i=0;i<n;i++){
            if(i!=0 && arr[i]==arr[i-1]){
                continue;
            }
            for(int j=i+1;j<n;j++){
                if(j!=i+1 && arr[j]==arr[j-1]){
                    continue;
                }
                int K=j+1;
                int l=n-1;
                while(K<l){
                    int sum=arr[i]+arr[j]+arr[K]+arr[l];
                    if(sum==k){
                        vector<int>temp={arr[i],arr[j],arr[K],arr[l]};
                        ans.push_back(temp);
                        K++;
                        l--;
                        while(K<l && arr[l]==arr[l+1]){
                            l--;
                        }
                        while(K<l && arr[K]==arr[K-1]){
                            K++;
                        }
                    }else if(sum>k){
                        l--;
                    }else{
                        K++;
                    }
                }
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
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.fourSum(a, k);
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends