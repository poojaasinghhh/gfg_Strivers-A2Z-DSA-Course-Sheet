//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this method */

class Solution{
  public:
    vector<int> matrixDiagonally(vector<vector<int>>&mat)
    {
         //Your code here
         
              vector<int>ans;
         int n=mat.size();
         int m=mat[0].size();
         int count=0;
         while(count<=(n+m-2)){
             vector<int>res;
         for(int i=0;i<n;i++){
             for(int j=0;j<m;j++){
                 if((i+j)==count){
                     res.push_back(mat[i][j]);
                 }
             }
         }
         if(count%2==0){
             reverse(res.begin(),res.end());
         }
         for(auto it:res){
             ans.push_back(it);
         }
         count++;
         }
         return ans;
    }
};


//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n;
        int k=0;
        //cin>>k;
        cin>>n;
        vector<vector<int>>mat(n, vector<int>(n));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin >> mat[i][j];
            }
        }
        Solution obj;
        vector<int>ans = obj.matrixDiagonally(mat);
        for(auto i: ans)cout << i << " ";
        cout << "\n";
        
       
    }
}
// } Driver Code Ends