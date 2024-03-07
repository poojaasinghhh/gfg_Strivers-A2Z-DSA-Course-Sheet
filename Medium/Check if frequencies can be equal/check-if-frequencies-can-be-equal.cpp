//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	bool sameFreq(string s)
	{
	    // code here 
	    unordered_map<char, int> freq;

    // Count the frequency of each character
    for (char c : s) {
        freq[c]++;
    }

    // Count the frequency occurrences
    unordered_map<int, int> freqCount;
    for (auto& pair : freq) {
        freqCount[pair.second]++;
    }

    // If there's only one frequency, return true
    if (freqCount.size() == 1) {
        return true;
    }

    // If there are more than two different frequencies, return false
    if (freqCount.size() > 2) {
        return false;
    }

    // Check if it's possible to remove one character to make all frequencies the same
    auto it = freqCount.begin();
    int firstFreq = it->first;
    int firstFreqCount = it->second;
    ++it;
    int secondFreq = it->first;
    int secondFreqCount = it->second;

    if ((firstFreq == 1 && firstFreqCount == 1) || (secondFreq == 1 && secondFreqCount == 1)) {
        return true;
    }

    return (firstFreqCount == 1 && (firstFreq == secondFreq + 1 || firstFreq == 1)) ||
           (secondFreqCount == 1 && (secondFreq == firstFreq + 1 || secondFreq == 1));
}
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.sameFreq(s)<<endl;
    }
}



// } Driver Code Ends