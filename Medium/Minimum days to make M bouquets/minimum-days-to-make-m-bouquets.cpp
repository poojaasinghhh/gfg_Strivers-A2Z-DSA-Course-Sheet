//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  
    int possible(vector<int>bloomDay,int mid,int K,int M){
        
        int count=0,bq=0;
        
        for(int i=0;i<bloomDay.size();i++){
            if(bloomDay[i]<=mid){
                count++;
            }else{
                bq+=count/K;
                count=0;
            }
        }
        bq+=count/K;
        if(bq>=M){
            return 1;
        }else{
            return 0;
        }
        
    }
    
    int solve(int M, int K, vector<int> &bloomDay){
      // Code here
      if(M*K>bloomDay.size()){
          return -1;
      }
      int high=*max_element(bloomDay.begin(), bloomDay.end()),low=*min_element(bloomDay.begin(), bloomDay.end()),mid,ans=0;
      
      while(low<=high){
          mid=(low+high)/2;
          
          if(possible(bloomDay,mid,K,M)){
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
    int t;
    cin >> t;
    while (t--) {
        int m, k;
    cin >> m >> k;
    string s;
    getline(cin, s);
    getline(cin, s);
    int n = s.length();
    int num = 0;
    bool f = 0;
    vector<int> bloomDay;
    for (int i = 0; i < n; i++)
    {
      if (s[i] == ' ')
      {
        if (!f)
          continue;
        bloomDay.push_back(num);
        num = 0;
        f = 0;
      }
      else
      {
        num = (num * 10) + (s[i] - '0');
        f = 1;
      }
    }
    if (f)
    {
      bloomDay.push_back(num);
    }
    Solution obj;
    cout<<obj.solve(m, k, bloomDay)<<endl;
    }
    return 0;
}
// } Driver Code Ends