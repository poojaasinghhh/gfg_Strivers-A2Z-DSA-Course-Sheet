//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int maxFind(vector<int>piles,int n){
        int maxx=INT_MIN;
        for(int i=0;i<n;i++){
            maxx=max(maxx,piles[i]);
        }
        return maxx;
    }
    
    int hourFind(vector<int>piles,int N,int mid){
        int total_hour=0,per_pile;
        for(int i=0;i<N;i++){
            per_pile=ceil((piles[i]*1.0)/(mid*1.0));
            total_hour+=per_pile;
        }
        return total_hour;
    }
    int Solve(int N, vector<int>& piles, int H) {
        // Code here
        int high=maxFind(piles,N),low=1,mid,ans=INT_MAX;
        while(low<=high){
            mid=(low+high)/2;
            if(hourFind(piles,N,mid)<=H){
                ans=min(ans,mid);
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
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            a.push_back(x);
        }
        int h;
        cin >> h;
        Solution obj;

        cout << obj.Solve(n, a, h);
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends