//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    vector<long long>ans;
    long long mult=1;
    void fact(int i,long long n){
        mult=mult*i;
        if(mult>n){
            return;
        }
        ans.push_back(mult);
        fact(i+1,n);
        
    }
    vector<long long> factorialNumbers(long long N)
    {
        // Write Your Code here
        if(N<=1){
            ans.push_back(N);
            return ans;
        }
        fact(1,N);
        return ans;
        
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long N;
        cin>>N;
        Solution ob;
        vector<long long> ans = ob.factorialNumbers(N);
        for(auto num : ans){
            cout<<num<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}
// } Driver Code Ends