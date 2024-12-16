//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int lenOfLongestSubarr(vector<int>& arr, int k) {
        // code here
        
        map<long long,int>temp;
        
        int maxx=0;
        long long sum=0;
        
        int n=arr.size()-1;
        
        for(int i=0;i<n;i++){
            
            sum+=arr[i];
            
            if(sum==k){
                maxx=max(maxx,i+1);
                
            }
            
            long long rem= sum-k;
            
            if(temp.find(rem)!=temp.end()){
                maxx=max(maxx,i-temp[rem]);
            }
            if(temp.find(sum)==temp.end()){
            temp[sum]=i;
            }
            
        }
        
        
        return maxx;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore newline character after t

    while (t--) {
        vector<int> arr;
        int k;
        string inputLine;

        getline(cin, inputLine); // Read the array input as a line
        stringstream ss(inputLine);
        int value;
        while (ss >> value) {
            arr.push_back(value);
        }

        cin >> k;
        cin.ignore(); // Ignore newline character after k input

        Solution solution;
        cout << solution.lenOfLongestSubarr(arr, k) << "\n";
        cout << "~\n";
    }

    return 0;
}

// } Driver Code Ends