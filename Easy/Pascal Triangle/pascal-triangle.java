//{ Driver Code Starts
// Initial Template for Java

import java.io.*;
import java.util.*;

class GFG {
    // Driver code
    public static void main(String[] args) throws Exception {
        BufferedReader br =
            new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine().trim());
        while (t-- > 0) {
            int n = Integer.parseInt(br.readLine().trim());

            ArrayList<Long> ans = new Solution().nthRowOfPascalTriangle(n);
            printAns(ans);
        }
    }
    public static void printAns(ArrayList<Long> ans) {
        for (Long x : ans) {
            System.out.print(x + " ");
        }
        System.out.println();
    }
}

// } Driver Code Ends


class Solution {
    ArrayList<Long> nthRowOfPascalTriangle(int n) {
        long ans = 1L;
        long m = 1000000007L;

        ArrayList<Long> ret = new ArrayList<>();
        ret.add(ans);

        for (int i = 1; i < n; i++) {
            ans = (ans * (n - i)) % m;
            ans = (ans * modInverse(i, m)) % m;
            ret.add(ans);
        }

        return ret;
    }

    // Function to calculate the modular inverse
    private long modInverse(long a, long m) {
        long m0 = m;
        long y = 0, x = 1;

        if (m == 1)
            return 0;

        while (a > 1) {
            long q = a / m;
            long t = m;

            m = a % m;
            a = t;
            t = y;

            y = x - q * y;
            x = t;
        }

        if (x < 0)
            x += m0;

        return x;
    }
}
