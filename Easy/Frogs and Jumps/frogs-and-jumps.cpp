//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int unvisitedLeaves(int N, int leaves, int frogs[]) {
        // Code here
         vector<bool> visited(leaves + 1, false);

    // Mark the leaves visited by each frog
    for (int i = 0; i < N; ++i) {
        int strength_i = frogs[i];
        if(visited[strength_i]==false){
        for (int j = strength_i; j <= leaves; j += strength_i) {
            visited[j] = true;
        }
        }
    }

    // Count unvisited leaves
    int unvisitedLeavesCount = 0;
    for (int i = 1; i <= leaves; ++i) {
        if (!visited[i]) {
            unvisitedLeavesCount++;
        }
    }

    return unvisitedLeavesCount;
    }
};


//{ Driver Code Starts.


int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, leaves;
        cin >> N >> leaves;
        int frogs[N];
        for (int i = 0; i < N; i++) {
            cin >> frogs[i];
        }

        Solution ob;
        cout << ob.unvisitedLeaves(N, leaves, frogs) << endl;
    }
}
// } Driver Code Ends