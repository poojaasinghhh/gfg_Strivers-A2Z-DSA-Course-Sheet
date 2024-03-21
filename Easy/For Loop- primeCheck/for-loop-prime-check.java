//{ Driver Code Starts
import java.io.*;
import java.util.*;

class GFG {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t;
        t = Integer.parseInt(br.readLine());
        while(t-- > 0){
            
            int n;
            n = Integer.parseInt(br.readLine());
            
            Solution obj = new Solution();
            String res = obj.isPrime(n);
            
            System.out.println(res);
            
        }
    }
}

// } Driver Code Ends



class Solution {
    public static String isPrime(int n) {
        
                
        // Code here
        if(n==1){
            return "No";
        }
        
        for (int i = 2; i <= Math.sqrt(n) ; i++) {
            // Write your logic here
            // Return "Yes" if n is prime, else return "No"
            /*n is prime only if it is not divisible by any i.
            We will not reach till n and 1 is already discarded*/
            if(n%i==0){
                return "No";
            }

            // return  Yes if n is a prime number ,else return No
        }
        return "Yes";
    }
}
        
