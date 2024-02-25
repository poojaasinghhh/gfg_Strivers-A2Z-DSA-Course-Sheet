//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        // Your code here
        map<int,int> mpp;
        int s=0,maxx=0,maxi=0;
        for(int i=0;i<n;i++){
            s=s+A[i];
            if(s==0){
                maxx=i+1;
            }else{
                if(mpp.find(s)!=mpp.end()){
                    maxx=i-mpp[s];
                }else{
                    mpp[s]=i;
                }
            }
            
            if(maxx>maxi){
                maxi=maxx;
            }
        }
        
        return maxi;
        
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}



// } Driver Code Ends