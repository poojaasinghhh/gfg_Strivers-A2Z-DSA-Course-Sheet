//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// A Tree node
struct Node {
    int data;
    struct Node *left, *right;
};

// Utility function to create a new node
Node* newNode(int data) {
    Node* temp = new Node;
    temp->data = data;
    temp->left = temp->right = NULL;
    return (temp);
}

Node* buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;)
        ip.push_back(str);

    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));

    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


// } Driver Code Ends
// User function Template for C++

/*// A Tree node
struct Node
{
    int data;
    struct Node *left, *right;
};*/

class Solution {
  public:

    int merge(vector<int>& nodes, int l, int mid, int r) {
        int inv = 0;
        int n1 = mid - l + 1;
        int n2 = r - mid;
        
        int a[n1], b[n2];
        
        for(int i=0; i<n1; i++) {
            a[i] = nodes[i+l];
        }
        
        for(int j=0; j<n2; j++) {
            b[j] = nodes[j+mid+1];
        }
        
        int i=0, j=0, k=l;
        
        while(i < n1 && j < n2) {
            if(a[i] <= b[j]) {
                nodes[k] = a[i];
                i++;
            } else {
                nodes[k] = b[j];
                inv += n1 - i;
                j++;
            }
            k++;
        }
        
        while(i < n1) {
            nodes[k] = a[i];
            i++; k++;
        }
        
        while(j < n2) {
            nodes[k] = b[j];
            j++; k++;
        }
        
        return inv;
    }
    
    int mergeSort(vector<int>& nodes, int l, int r) {
        int inv = 0;
        if(l < r) {
            int mid = (l+r)/2;
            inv += mergeSort(nodes, l, mid);
            inv += mergeSort(nodes, mid+1, r);
            inv += merge(nodes, l, mid, r);
        }
        return inv;
    }
      
    void inorder(Node* root, vector<int>& nodes) {
        if(root == NULL) {
            return;
        }
        
        inorder(root -> left, nodes);
        nodes.push_back(root -> data);
        inorder(root -> right, nodes);
    } 

    /*You are required to complete below function */
    int pairsViolatingBST(int n, Node *root) {
        // your code goes here
        vector<int> nodes;
        inorder(root, nodes);
        
        int inversionCnt = 0;
        
        inversionCnt = mergeSort(nodes, 0, n-1);
        
        
        
        return inversionCnt;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    getchar();

    while (t--) {

        int n;
        cin >> n;
        getchar();

        string inp;
        getline(cin, inp);

        struct Node* root = buildTree(inp);

        Solution ob;
        int ans = ob.pairsViolatingBST(n, root);
        cout << ans << endl;
    }

    return 0;
}
// } Driver Code Ends