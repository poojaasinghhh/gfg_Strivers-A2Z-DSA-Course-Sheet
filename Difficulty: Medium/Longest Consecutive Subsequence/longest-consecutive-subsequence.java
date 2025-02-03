//{ Driver Code Starts
import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());

        while (t-- > 0) {
            // Read first array
            String input = br.readLine();
            String[] inputArray = input.split(" ");
            int[] arr = Arrays.stream(inputArray).mapToInt(Integer::parseInt).toArray();

            Solution ob = new Solution();
            int res = ob.longestConsecutive(arr);

            System.out.println(res);
            System.out.println("~");
        }
    }
}

// } Driver Code Ends


class Solution {

    // Function to return length of longest subsequence of consecutive integers.
    public int longestConsecutive(int[] arr) {
        // code here
        int n = arr.length;
        if (n == 0) return 0;

        //sort the array:
        Arrays.sort(arr);
        int cnt = 1;
        int longest = 1;

        //find longest sequence:
        for (int i = 1; i < n; i++) {
             if (arr[i] == arr[i - 1]) {
            // Skip duplicate elements
            continue;
        }
            if(arr[i]==arr[i-1]+1){
                cnt++;
            }else{
                cnt=1;
            }
            longest = Math.max(longest, cnt);
        }
        return longest;
    }
}