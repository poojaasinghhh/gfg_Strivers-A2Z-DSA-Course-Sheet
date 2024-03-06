//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  
    int possible(vector<int>num,int k,int mid){
        
        int sum=0;
        
        for(int i=0;i<num.size();i++){
            sum+=(ceil((num[i]*1.0)/(mid*1.0)));
        }
        if(sum<=k){
            return 1;
        }else{
            return 0;
        }
    }
    int smallestDivisor(vector<int>& nums, int K) {

        // Write your code here.
        int low=1,high=*max_element(nums.begin(),nums.end()),mid,ans=-1;
        while(low<=high){
            mid=(low+high)/2;
            if(possible(nums,K,mid)){
                ans=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input
        int n, k;
        cin >> n >> k;
        vector<int> vec(n);
        for (int i = 0; i < n; i++) cin >> vec[i];

        Solution obj;
        cout << obj.smallestDivisor(vec, k) << endl;
        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends