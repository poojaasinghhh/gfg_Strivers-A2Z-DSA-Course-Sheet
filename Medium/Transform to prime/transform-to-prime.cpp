//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    int minNumber(int arr[], int N) {
    int sum = 0;
    for (int i = 0; i < N; i++) {
        sum += arr[i];
    }

    // Dynamically allocate memory for the prime vector
    vector<int> prime(sum + 101, 1); // Adjusted size to prevent out-of-bounds access

    for (int i = 2; i * i <= sum + 100; i++) {
        if (prime[i] == 1) {
            for (int j = i * i; j <= sum + 100 && j >= 0; j += i) { // Added check for j >= 0
                prime[j] = 0;
            }
        }
    }

    prime[0] = 0;
    prime[1] = 0;

    if (prime[sum] == 1) {
        return 0;
    }

    for (int i = sum + 1; i < sum + 101; i++) { // Adjusted upper bound
        if (prime[i] == 1) {
            return i - sum;
        }
    }

    return -1;
}
};


//{ Driver Code Starts.

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution obj;
        cout << obj.minNumber(arr, n)<<endl;
    }
    return 0;
}
// } Driver Code Ends