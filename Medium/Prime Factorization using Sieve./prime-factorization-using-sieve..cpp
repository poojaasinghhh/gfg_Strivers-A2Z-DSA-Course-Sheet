//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    void sieve(){}
    static void sieve1(vector<int>prime,int N) {
        
        for(int i=2;i*i<N;i++){
            if(prime[i]==1){
                for(int j=i*i;j<=N;j+=i){
                    prime[j]=0;
                }
            }
        }
    }

    vector<int> findPrimeFactors(int N) {

        // Write your code here
         vector<int>ans;
         vector<int>prime(N+1,1);
         Solution::sieve1(prime,N);
         for(int i=2;i*i<=N;i++){
        if(prime[i] && N%i==0) {
            while(N%i==0) {
                N/=i;
                ans.push_back(i);
            }
        }
    }
    if(N>1)ans.push_back(N);
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input
        int n;
        cin >> n;

        Solution obj;
        obj.sieve();
        vector<int> vec = obj.findPrimeFactors(n);
        for (int i = 0; i < vec.size(); i++) {
            cout << vec[i] << " ";
        }
        cout << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends