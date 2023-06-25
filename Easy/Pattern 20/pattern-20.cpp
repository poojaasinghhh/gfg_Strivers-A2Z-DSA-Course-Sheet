//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        // code here
        int space=2*n-2;
        int star;
        for(int i=1;i<=2*n-1;i++){
            star=i;
            if(i>n){
                star=2*n-i;
            }
            for(int j=1;j<=star;j++){
                cout<<"*";
            }
            for(int j=1;j<=space;j++){
                cout<<" ";
            }
            for(int j=1;j<=star;j++){
                cout<<"*";
            }
            if(i<n){
                space=space-2;
            }else{
                space=space+2;
            }
            cout<<endl;
        }
        
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends