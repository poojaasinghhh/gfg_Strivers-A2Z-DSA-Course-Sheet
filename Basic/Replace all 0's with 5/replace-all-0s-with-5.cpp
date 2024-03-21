//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
 
// Driver program to test above function

// } Driver Code Ends
class Solution{
  public:
    /*you are required to complete this method*/
    int convertFive(int n)
    {
    //Your code here
        int neww=0;
         int place = 1;
        while(n!=0){
            int ld=n%10;
            if(ld==0){
                ld=5;
            }
            neww = ld * place + neww;
            place *= 10; 
            n=n/10;
        }
        return neww;
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
    	cin>>n;
    	Solution obj;
    	cout<<obj.convertFive(n)<<endl;
    }
}
// } Driver Code Ends