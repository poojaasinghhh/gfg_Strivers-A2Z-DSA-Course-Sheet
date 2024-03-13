//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string s) {
        //Your code here
        int neg=0,i=0;
        if(s[0]=='-'){
            neg=1;
            i++;
        }
        int res=0;
        
        while(i<s.length()){
            if(s[i]-'0'<=9 && s[i]-'0'>=0){
                res=res*10+(s[i]-'0');
            }else{
                return -1;
            }
            i++;
        }
        
        if(neg==1){
            return -res;
        }else{
            return res;
        }
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		int ans=ob.atoi(s);
		cout<<ans<<endl;
	}
}
// } Driver Code Ends