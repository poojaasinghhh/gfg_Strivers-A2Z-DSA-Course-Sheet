//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
		
	public:
	int solve(int i,int j,int n, int m, int a[], int b[], int op, vector <vector <int>> &dp)
    {
        if(j == m || i == n) return 0;
        if(dp[j][op] != -1) return dp[j][op];
        
        int ans1 = 0;
        int ans2 = 0;
        
        ans1 = a[i]*b[j] + solve(i+1, j+1, n, m, a, b, op, dp);
        if(op > 0) ans2 += solve(i+1, j, n, m, a, b, op-1, dp);
        
        return dp[j][op] = max(ans1, ans2);
    }
    
    int maxDotProduct(int n, int m, int a[], int b[]) 
    { 
        int op = n-m;
        vector <vector <int>> dp(n+1, vector <int>(op+1, -1));
        return solve(0, 0, n, m, a, b, op, dp);
    } 
};


//{ Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        int a[n], b[m];

        for(int i = 0; i < n; i++)
        	cin >> a[i];

        for(int i = 0; i < m; i++)
        	cin >> b[i];

       

	    Solution ob;
	    cout << ob.maxDotProduct(n, m, a, b) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends