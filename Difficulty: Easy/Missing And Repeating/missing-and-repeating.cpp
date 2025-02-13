//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
    
        
        
        int temp[arr.size()+1]={0};
        
        for(int i=0;i<arr.size();i++){
            temp[arr[i]]++;
        }
        int missing=-1;
        int twice=-1;
        
        for(int i=1;i<=arr.size();i++){
            if(temp[i]==2){
                twice=i;
            }else if (temp[i] == 0){ 
                missing = i;
            }

        if (twice != -1 && missing != -1)
            break;
    }
    return {twice, missing};
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        int num;
        vector<int> arr;
        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        Solution ob;
        auto ans = ob.findTwoElement(arr);
        cout << ans[0] << " " << ans[1] << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends