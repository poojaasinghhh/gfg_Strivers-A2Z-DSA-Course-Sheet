//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // a,b : the arrays
    // Function to return a list containing the union of the two arrays.
    vector<int> findUnion(vector<int> &arr1, vector<int> &arr2) {
        // Your code here
        // return vector with correct order of elements
        
        vector<int>ans;
        ans.push_back(min(arr1[0],arr2[0]));
        int n=arr1.size();
        int m=arr2.size();
        int i=0; 
        int j=0;
        while(i<n && j<m){
            if(arr1[i] != ans.back() && arr2[j] != ans.back()){
                if(arr1[i] < arr2[j]){
                    ans.push_back(arr1[i]);
                    i++;
                }
                else if(arr1[i] > arr2[j]){
                    ans.push_back(arr2[j]);
                    j++;
                }
                else{
                    ans.push_back(arr1[i]);
                    i++;
                    j++;
                }
            }
            else if(arr1[i] == ans.back() && arr2[j] != ans.back()){
                i++;                
            }
            else if(arr1[i] != ans.back() && arr2[j] == ans.back()){
                j++;
            }
            else{
                i++;
                j++;
            }
        }
        
        while(i<n){
            if(arr1[i] != ans.back()) ans.push_back(arr1[i]);
            i++;
        }
        
        while(j<m){
            if(arr2[j] != ans.back()) ans.push_back(arr2[j]);
            j++;
        }
        return ans;
        }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> a, b;
        string input;

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            a.push_back(number);
        }

        // Read second array
        getline(cin, input);
        stringstream ss2(input);
        while (ss2 >> number) {
            b.push_back(number);
        }

        Solution ob;
        vector<int> ans = ob.findUnion(a, b);
        for (int i : ans)
            cout << i << ' ';
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends