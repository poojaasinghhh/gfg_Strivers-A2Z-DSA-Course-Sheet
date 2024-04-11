//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution {
  public:
    int sumOfAll(int l, int r){
        // code here
        int temp[r+1];
        temp[0]=0;
        temp[1]=0;
        for(int i=2;i<=r;i++){
            temp[i]=i;
        }
        
        for(int i=2;i<=r;i++){
            if(temp[i]==i){
            for(int j=i+i;j<=r;j+=i){
                if(temp[j]==j){
                    temp[j]=i;
                }else{
             
                    temp[j]=temp[j]+i;
                }
            }
            
            }
        }
        
        int sum=0;
        
        for(int i=l;i<=r;i++){
            sum+=temp[i];
        }
        
        return sum;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int l, r;
        cin>>l>>r;
        Solution ob;
        cout<<ob.sumOfAll(l,r)<<endl;
    }
    return 0;
}

// } Driver Code Ends