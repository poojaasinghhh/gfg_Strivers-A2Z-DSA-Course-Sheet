//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
  bool isprime(int n)
    {
        if(n==0 || n==1)
        return false;
        
        for(int i=2;i<n;i++)
        if(n%i==0) return false;
        
        return true ;
    }
    vector<int> orderedPrime(int n)
    {
        vector<int>ans;
        for(int i=2;i<=n;i++)
        {
            if(n%i==0 && isprime(i))
            {
                int count=0;
                while(n>0 && n%i==0)
                {
                    count++ ;
                    n=n/i;
                }
                ans.push_back(count);
            }
        }
        
        sort(ans.begin(),ans.end());
        int temp=1;
        for(int i=0;i<ans.size();i++)
        {
            temp=temp*(ans[i]+1);
        }
        ans.push_back(temp);
        return ans ;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        Solution ob;
        vector<int> ans = ob.orderedPrime(n);
        for(int i = 0;i < ans.size()-1;i++)
            cout<<ans[i]<<" ";
        cout<<endl;
        cout<<ans[ans.size()-1]<<"\n";
    }
    return 0;
}
// } Driver Code Ends