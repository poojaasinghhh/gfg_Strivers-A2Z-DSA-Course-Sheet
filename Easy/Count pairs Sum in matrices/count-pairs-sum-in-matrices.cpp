//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function template for C++
class Solution{
public:	

	int countPairs(vector<vector<int>> &mat1, vector<vector<int>> &mat2, int n, int x)
	{
  int count = 0;
    // Use two pointers technique for the entire matrices
    int j = n * n - 1; // Start from the last element of mat2
    int i = 0; // Start from the first element of mat1

    while (i < n * n && j >= 0) {
        int row1 = i / n; // Current row in mat1
        int col1 = i % n; // Current column in mat1
        int row2 = j / n; // Current row in mat2
        int col2 = j % n; // Current column in mat2

        int sum = mat1[row1][col1] + mat2[row2][col2];
        if (sum == x) {
            // Found a pair
            count++;
            i++; // Move to the next element in mat1
            j--; // Move to the previous element in mat2
        } else if (sum < x) {
            // If sum is less than x, move to the next element in mat1
            i++;
        } else {
            // If sum is more than x, move to the previous element in mat2
            j--;
        }
    }
    return count;
	}
};

//{ Driver Code Starts.


int main() 
{

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;

        vector<vector<int>> mat1(n, vector<int>(n, -1));
        vector<vector<int>> mat2(n, vector<int>(n, -1));

        for(int i = 0; i < n; i++)
        {
        	for(int j = 0; j < n; j++)
        	{
        		cin >> mat1[i][j];
        	}
        }

        for(int i = 0; i < n; i++)
        {
        	for(int j = 0; j < n; j++)
        	{
        		cin >> mat2[i][j];
        	}
        }

        Solution ob;

        cout << ob.countPairs(mat1, mat2, n, x) << "\n";

    }

    return 0;
}
// } Driver Code Ends