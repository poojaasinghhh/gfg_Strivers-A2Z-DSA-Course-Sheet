//{ Driver Code Starts
#include<iostream>
#include<string.h>
using namespace std;


// } Driver Code Ends
/*Complete the function below*/

class Solution {
public:
    int PalinArray(int a[], int n)
    {
    	// code here
    	int rev=0,cnt=0;
    	for(int i=0;i<n;i++){
    	    
    	    int n1=a[i];
    	    
    	    while(n1!=0){
    	        int ld=n1%10;
    	        rev=rev*10+ld;
    	        n1=n1/10;
    	    }
    	    if(rev==a[i]){
    	        cnt++;
    	    }else{
    	        break;
    	    }
    	    
    	    rev=0;
    	    
    	}
    	
    	
    	if(cnt==n){
    	    return 1;
    	}else{
    	    return 0;
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
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		Solution obj;
		cout<<obj.PalinArray(a,n)<<endl;
	}
}
// } Driver Code Ends