//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
		vector<string> AllPossibleStrings(string s){
		    // Code here
		    int poww=1<<s.length();
		    
		    vector<string>ans;
		    
		    for(int i=1;i<poww;i++){
		        string st="";
		        for(int j=0;j<s.length();j++){
		            if(i&(1<<j)){
		                st=st+s[j];
		            }
		        }
		        
		        ans.push_back(st);
		    }
		    
		    sort(ans.begin(),ans.end());
		    return ans;
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	}
	return 0;
}
// } Driver Code Ends