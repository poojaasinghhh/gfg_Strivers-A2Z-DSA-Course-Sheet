//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> FindSequenece(int N) {
        // Code here
        vector<int>temp;
        
        for(int i=2;i*i<=N;i++){
            
            while(N%i==0){
                temp.push_back(N);
                N=N/i;
            }
        }
        
        if(N>1){
            temp.push_back(N);
        }
        
        temp.push_back(1);
        int l=0,h=temp.size()-1;
        while(l<h){
            int num=temp[l];
            temp[l]=temp[h];
            temp[h]=num;
            l++;
            h--;
        }
        
         return temp;
    }
    
};


//{ Driver Code Starts.

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int N;
        cin >> N;
        Solution obj;
        vector<int> ans = obj.FindSequenece(N);
        bool x = 1;

        for (int i = 1; i < ans.size(); i++)
            if (ans[i] <= ans[i - 1] || ans[i - 1] == 0 || ans[i] % ans[i - 1] != 0) {
                x = 0;
                break;
            }

        if (ans.back() != N)
            x = 0;

        cout << ans.size() << " " << x << "\n";
    }
    return 0;
}
// } Driver Code Ends