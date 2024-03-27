//{ Driver Code Starts
/*package whatever //do not write package name here */

import java.util.*;
import java.lang.*;
import java.io.*;

class Node {
    int data;
    Node next;
    
    public Node(int head){
        this.data = head;
        this.next = null;
    }
}

class GFG {
    public static Node a;
    public static Node b;
    
    public static void printList(Node head){
        Node temp = head;
        while(temp != null){
            System.out.print(temp.data+" ");
            temp = temp.next;
        }
        System.out.println();
    }
    
	public static void main (String[] args) {
		Scanner sc = new Scanner (System.in);
		int t = sc.nextInt();
		while(t-- > 0){
		    a=null;
		    b=null;
		    int n = sc.nextInt();
		    Node head = new Node(sc.nextInt()), tail = head;
		    while(n-- > 1){
		        tail.next = new Node(sc.nextInt());
		        tail = tail.next;
		    }
		    Solution obj = new Solution();
		    obj.alternatingSplitList(head);
		    printList(a);
		    printList(b);
		}
	}
}



// } Driver Code Ends


/*
The structure of node class is:
class Node {
    int data;
    Node next;
    
    public Node(int head){
        this.data = head;
        this.next = null;
    }
}
*/

/*

class GFG {
    public static Node a; //store the head of first list in this
    public static Node b; //store the head of second list in this
}
*/


class Solution {
    public void alternatingSplitList(Node head){
       //Your code here
       GFG.a=new Node(-1);
       GFG.b=new Node(-1);
       
       Node temp=head;
       
       Node curr1=GFG.a;
       Node curr2=GFG.b;
       
       int c=1;
       while(temp!=null){
           if(c%2!=0){
               Node neww=new Node(temp.data);
               curr1.next=neww;
               curr1=curr1.next;
           }else{
               Node neww=new Node(temp.data);
               curr2.next=neww;
               curr2=curr2.next;
           }
           c++;
           
           temp=temp.next;
       }
       
       GFG.a=GFG.a.next;
       GFG.b=GFG.b.next;
    }
    
}