//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
public:
    string isSumOfTwo(int N){
        // code here
        vector<int> prime(N+1,1);
        
        for(int i=2;i*i<=N;i++){
            if(prime[i]){
                for(int j=i*i;j<=N;j+=i){
                    prime[j]=0;
                }
            }
        
            
        }
        
        
        int low=2,high=N;
        
        while(low<=high){
            int num=N-low;
            
            if(prime[low] && prime[num]){
                return "Yes";
            }
            
            low++;
            high=num;
        }
        
        return "No";
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isSumOfTwo(N) << endl;
    }
    return 0;
}

// } Driver Code Ends