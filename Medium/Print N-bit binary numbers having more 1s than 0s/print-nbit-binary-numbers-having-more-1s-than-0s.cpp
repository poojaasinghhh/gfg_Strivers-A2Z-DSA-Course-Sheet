//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	void backtrack(int oneCount, int zeroCount, string str, vector<string>& result, int N) {
    if (str.length() == N) {
        result.push_back(str);
        return;
    }
    if (oneCount < N) {
        backtrack(oneCount + 1, zeroCount, str + "1", result, N);
    }
    if (oneCount > zeroCount) {
        backtrack(oneCount, zeroCount + 1, str + "0", result, N);
    }
}

vector<string> NBitBinary(int N) {
    vector<string> result;
    backtrack(0, 0, "", result, N);
    return result;
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
   	while(t--)
   	{
   		int n;
   		cin >> n;
        Solution ob;
   		vector<string> ans = ob.NBitBinary(n);

   		for(auto i:ans)
   			cout << i << " ";

   		cout << "\n";
   	}

    return 0;
}
// } Driver Code Ends