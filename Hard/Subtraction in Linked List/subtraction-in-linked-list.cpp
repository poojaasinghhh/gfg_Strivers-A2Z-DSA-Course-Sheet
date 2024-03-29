//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// Node Class
class Node {
public:
    int data;
    Node* next;

    Node(int val) : data(val), next(NULL) {}
};

// Linked List Class
class LinkedList {
public:
    Node* head;
    Node* tail;

    LinkedList() : head(NULL), tail(NULL) {}

    // creates a new node with given value and appends it at the end of the linked list
    void insert(int val) {
        if (head == NULL) {
            head = new Node(val);
            tail = head;
        } else {
            tail->next = new Node(val);
            tail = tail->next;
        }
    }
};


// } Driver Code Ends
//User function Template for C++

class Solution {
public:
      Node* removeLeadingZeros(Node* head) {
        while(head && head->data == 0)
            head = head->next;
        return head;
    }
    
    Node* reverse(Node* head) {
        Node* curr = head;
        Node* prev = NULL;
        while(curr) {
            Node* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    
    int length(Node* head) {
        int len = 0;
        while(head) {
            head = head->next;
            len++;
        }
        return len;
    }
    
    // head2 > head1
    bool isGreater(Node* head2, Node* head1) {
        int len2 = length(head2), len1 = length(head1);
        if(len2 > len1) return true;
        if(len2 < len1) return false;
        while(head2 && head1) {
            int val2 = head2->data, val1 = head1->data;
            if(val2 > val1) return true;
            if(val2 < val1) return false;
            head2 = head2->next;
            head1 = head1->next;
        }
        return false;
    }

    Node* subLinkedList(Node* head1, Node* head2) {
        head1 = removeLeadingZeros(head1);
        head2 = removeLeadingZeros(head2);
        
        if(isGreater(head2, head1))
            swap(head1, head2);

        head1 = reverse(head1);
        head2 = reverse(head2);
        
        Node* dummy = new Node(-1);
        Node* runner = dummy;
        
        bool carry = false;
        while(head1 || head2) {
            int val1 = 0, val2 = 0;
            
            if(head1) {
                val1 = head1->data;
                head1 = head1->next;
            }
            if(head2) {
                val2 = head2->data;
                head2 = head2->next;
            }
            
            if(carry) {
                val1--;
                carry = false;
            }
            int curr = val1 - val2;
            if(curr < 0) {
                curr += 10;
                carry = true;
            }
            Node* newNode = new Node(curr);
            runner->next = newNode;
            runner = runner->next;
        }
        
        Node* res = dummy->next;
        res = reverse(res);
        res = removeLeadingZeros(res);
        
        if(res == NULL)
            return new Node(0);
        
        return res;
    }
};

//{ Driver Code Starts.

// prints the elements of linked list starting with head
void printList(Node* n) {
    while (n) {
        cout << n->data;
        n = n->next;
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n;
        LinkedList LL1;
        string l1,l2;
        cin>>l1;
        for (int j = 0; j < n; ++j) {
            int x=(l1[j]-'0');
            LL1.insert(x);
        }

        int m;
        cin >> m;
        LinkedList LL2;
        cin>>l2;
        for (int j = 0; j < m; ++j) {
            int x=(l2[j]-'0');
            LL2.insert(x);
        }

        Solution ob;
        Node* res = ob.subLinkedList(LL1.head, LL2.head);
        printList(res);
    }

    return 0;
}

// } Driver Code Ends