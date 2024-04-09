//{ Driver Code Starts

#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends

class Solution{
public:
    int count(int A,int B,int N){ 
        // code here
        int cnt=0,ans=0;
        for(int n=A;n<=B;n++){
            cnt=0;
        for(int i=1;i*i<=n;i++){
            if(n%i==0){
                cnt++;
                if(n/i!=i){
                    cnt++;
                }
            }
        }
        if(cnt==N){
            ans++;
        }
        
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
        int A,B,N;
        cin>>A>>B>>N;
        Solution ob;
        cout << ob.count(A,B,N) << endl;
    }
    return 0; 
}
// } Driver Code Ends