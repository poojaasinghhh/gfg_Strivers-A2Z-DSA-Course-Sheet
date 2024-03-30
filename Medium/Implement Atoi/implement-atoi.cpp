//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int helper(string s,int i,int num){
        if(i==s.size()){
            return num;
        }
        
        if(s[i]>='0' && s[i]<='9'){
            num=num*10+(s[i]-'0');
            return helper(s,i+1,num);
        }else{
            return -1;
        }
    }
    int atoi(string s) {
        //Your code here
        int i=0;
        if(s[0]=='-'){
            i=1;
        }
        
        int ans=helper(s,i,0);
        if(ans==-1){
            return ans;
        }
        if(s[0]=='-'){
            return -ans;
        }else{
            return ans;
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