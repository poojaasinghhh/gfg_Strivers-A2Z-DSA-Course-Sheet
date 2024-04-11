//{ Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
	public:
   	vector<int> sophie_Primes(int n){
   	    // Code here
   	    vector<int> prime(2*n+1,1);
   	    
   	    for(int i=2;i*i<2*n+1;i++){
   	        if(prime[i]==1){
   	            for(int j=i*i;j<2*n+1;j+=i){
   	                prime[j]=0;
   	                
   	            }
   	        }
   	    }
   	    
   	    // for(int i=0;i<2*n+1;i++){
   	    //     cout<<i<<" "<<prime[i]<<endl;
   	    // }
   	    
   	    vector<int>ans;
   	    
   	    for(int i=2;i<n;i++){
   	        if(prime[i]==1 && prime[(2*i)+1]==1){
   	            ans.push_back(i);
   	        }
   	    }
   	    
   	    return ans;
   	}    
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		vector<int> ans = ob.sophie_Primes(n);
		for(auto i: ans)
			cout << i <<" ";
		cout << "\n";
	}  
	return 0;
}
// } Driver Code Ends