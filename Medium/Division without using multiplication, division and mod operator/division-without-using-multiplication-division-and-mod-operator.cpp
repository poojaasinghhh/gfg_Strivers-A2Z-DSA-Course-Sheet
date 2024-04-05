//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    long long divide(long long dividend, long long divisor) 
    {
        //code here 
        int sign=0;
        if(dividend<0 && divisor>0 || dividend>=0 && divisor<0){
            sign=1;
        }
       dividend = abs(dividend);
       divisor = abs(divisor);
       int ans=0;
        while(dividend>=divisor){
            int cnt=0;
            long long divv=divisor;
            while(dividend>=(divv<<cnt+1)){
                cnt++;
            }
            
            ans+=1<<cnt;
            dividend-=divisor<<cnt;
        }
        
         if(sign) return -ans;
        else return ans;
    }
};

//{ Driver Code Starts.
int main() {
	int t;
	cin >> t;

	while (t--)
	{

		long long a, b;
		cin >> a >> b;
		
		Solution ob;
		cout << ob.divide(a, b) << "\n";
	}

	return 0;
}

// } Driver Code Ends