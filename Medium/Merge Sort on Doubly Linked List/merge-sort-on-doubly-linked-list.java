//{ Driver Code Starts
import java.io.*;
import java.util.*;

class Node {
    int data;
    Node next, prev;

    Node(int key) {
        data = key;
        next = prev = null;
    }
}

class Driverclass {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while (t-- > 0) {
            int n = sc.nextInt();
            int a1 = sc.nextInt();
            Node head = new Node(a1);
            Node temp = head;

            for (int i = 1; i < n; i++) {
                int a = sc.nextInt();
                Node n1 = new Node(a);
                n1.prev = temp;
                temp.next = n1;
                temp = n1;
            }

            head = new Solution().sortDoubly(head);
            printList(head);
        }
    }

    public static void printList(Node node) {
        Node temp = node;
        while (node != null) {
            System.out.print(node.data + " ");
            temp = node;
            node = node.next;
        }
        System.out.println();
        while (temp != null) {
            System.out.print(temp.data + " ");
            temp = temp.prev;
        }
        System.out.println();
    }
}

// } Driver Code Ends


// User function Template for Java

/*
class Node
{
    int data;
    Node next, prev;
    Node(int data)
    {
        this.data = data;
        next = prev = null;
    }
}
*/
class Solution {
    // Function to sort the given doubly linked list using Merge Sort.
      static Node sortDoubly(Node head)
    {
        // add your code here
        
        if(head==null || head.next==null){
            return head;
        }
        
        //storing middle by calliing split function
        
        
        Node left=head;
        Node right=splitList(head);
        
        
        
        //recursion fro further spliting the list 
        left=sortDoubly(left);
        right= sortDoubly(right);
        
        //calling merge functin to sort and merge
        Node result=merge(left, right);
        return result;
        
    }
    
    
    // split function to find middle
    static Node splitList(Node head){
        
        Node slow=head;
        Node fast=head;
        
        while(fast.next!=null && fast.next.next!=null){
            slow=slow.next;
            fast=fast.next.next;
        }
        
        Node temp=slow.next;
        slow.next=null;
        temp.prev=null;
        
        return temp;
    }
    
    
    // merge functin to perform sort and merge
    static Node merge(Node left, Node right){
        
        
        
        if(left==null){
            return right;
        }
        if(right==null){
            return left;
        }
        

        
        Node head=new Node(0);
        Node tail=head;
        Node temp=null;
        
    
            while(left!=null && right!=null){
                if(left.data<=right.data){
                    tail.next=left;
                    temp=tail;
                    tail=tail.next;
                    tail.prev=temp;
            
                    left=left.next;
                }else{
                    tail.next=right;
                    temp=tail;
                    tail=tail.next;
                    tail.prev=temp;
                   
                    right=right.next;
                }
            }
            
            if(left==null){
                tail.next=right;
                temp=tail;
                tail=tail.next;
                tail.prev=temp;
            }
            
            if(right==null){
                tail.next=left;
                temp=tail;
                tail=tail.next;
                tail.prev=temp;
            }
            
            // tail.next=null;
            
            head=head.next;
            head.prev=null;
            
            return head;
    }
}