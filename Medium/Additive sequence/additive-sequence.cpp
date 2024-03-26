//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    bool isAdditiveSequence(string n) {
        // Your code here

    int s = n.size();


    int num1 = 0;
    for (int i = 0; i < s -2; i++) {
        num1 = num1 * 10 + (n[i] - '0');

        int num2 = 0;
        for (int j = i + 1; j < s - 1; j++) {
            num2 = num2 * 10 + (n[j] - '0');
            int first = num1, sec = num2;

            int num3 = 0;


            int k = j + 1;
            while (k < s) {
                num3 = num3 * 10 + (n[k] - '0');

 


                if (num3 == first+sec) {
                    first = sec;
                    sec = num3;
                    num3 = 0;
                }

                k++;
            }


            if (k == s && num3 == 0)
                return true;
        }
    }


    return false;
}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;

    Solution sol;

    while (t--) {
        string s;
        cin >> s;

        bool result = sol.isAdditiveSequence(s);
        cout << result << endl;
    }

    return 0;
}

// } Driver Code Ends