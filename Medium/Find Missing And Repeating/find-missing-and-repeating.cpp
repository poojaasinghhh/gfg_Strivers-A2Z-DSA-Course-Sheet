//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        // code here
        long long sum = 0;
        long long sumOfSquares = 0;
        long long actualSum = (long long)n * (n + 1) / 2;
        long long actualSumOfSquares = (long long)n * (n + 1) * (2 * n + 1) / 6;

        for (int i = 0; i < n; i++) {
            sum += arr[i];
            sumOfSquares += (long long)arr[i] * arr[i];
        }

        long long diffSum = actualSum - sum;
        long long diffSumOfSquares = actualSumOfSquares - sumOfSquares;

        long long sumXY = diffSumOfSquares / diffSum;
        long long x = (diffSum + sumXY) / 2;
        long long y = x - diffSum;

        return {(int)y, (int)x};
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends