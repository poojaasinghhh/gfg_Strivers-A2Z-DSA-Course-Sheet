//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{
    public:
    vector<long long int> twoOddNum(long long int Arr[], long long int N)  
    {
        // code here
        
        vector<long long int>ans;
        
        long long int xorr=0;
        
        for(int i=0;i<N;i++){
            xorr^=Arr[i];
        }
        
        xorr=(xorr&(xorr-1))^xorr;
        
        long long int first=0,second=0;
        
        for(int i=0;i<N;i++){
            if(Arr[i]&xorr){
                first^=Arr[i];
            }else{
                second^=Arr[i];
            }
        }
        if(first>second){
            ans.push_back(first);
            ans.push_back(second); 
        }else{
            ans.push_back(second);
            ans.push_back(first);
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int N;
        cin>>N;
        long long int Arr[N];
        for(long int i = 0;i < N;i++)
        cin>>Arr[i];
        Solution ob;
        vector<long long int>ans=ob.twoOddNum(Arr,N);
        for(long long int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends