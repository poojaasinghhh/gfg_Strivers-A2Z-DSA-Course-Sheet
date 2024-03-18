//{ Driver Code Starts
// driver

import java.util.*;

class Node {
    int data;
    Node next;

    Node(int d) {
        data = d;
        next = null;
    }
}

class GfG{
    
    static void printList(Node n){
        while(n!=null){
            System.out.print(n.data+" ");
            n = n.next;
        }
        System.out.println();
    }
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        
        while (T-- > 0) {
            
            int n = sc.nextInt();
            int val = sc.nextInt();
            
            Node first = new Node(val);
            Node tail = first;
            for(int i=0; i<n-1; i++)
            {
                val = sc.nextInt();
                tail.next = new Node(val);
                tail = tail.next;
            }
            
            int m = sc.nextInt();
            val = sc.nextInt();
            
            Node second = new Node(val);
            tail = second;
            for(int i=0; i<m-1; i++)
            {
                val = sc.nextInt();
                tail.next = new Node(val);
                tail = tail.next;
            }
            
            Solution g = new Solution();
            Node res = g.addTwoLists(first, second);
            printList(res);
        }
    }
}

// } Driver Code Ends


/* node for linked list

class Node {
    int data;
    Node next;

    Node(int d) {
        data = d;
        next = null;
    }
}

*/

class Solution{
    //Function to add two numbers represented by linked list.
    static Node reverse(Node head)
    {
        if (head == null || head.next == null)
            return head;
 
        /* reverse the rest list and put
        the first element at the end */
        Node rest = reverse(head.next);
        head.next.next = head;
 
        /* tricky step -- see the diagram */
        head.next = null;
 
        /* fix the head pointer */
        return rest;
    }
 
    static Node addTwoLists(Node first, Node second){
        // code here
        // return head of sum list
         first = reverse(first);
         second = reverse(second);
        
        Node temp1=first;
        Node temp2=second;
        
        Node head=null;
        
        int carry=0;
        while(temp1!=null  && temp2!=null){
            int value1=temp1.data;
            int value2=temp2.data;
            
            int sum=value1+value2+carry;
            int rem=sum%10;
            carry=sum/10;
            
            if(head==null){
                Node n=new Node(rem);
                head=n;
            }else{
                Node n=new Node(rem);
                n.next=head;
                head=n;
            }
            
            temp1=temp1.next;
            temp2=temp2.next;
            
        }
        
         while(temp1!=null){
            int value1=temp1.data;
            
            int sum=value1+carry;
            int rem=sum%10;
            carry=sum/10;
            
            if(head==null){
                Node n=new Node(rem);
                head=n;
            }else{
                Node n=new Node(rem);
                n.next=head;
                head=n;
            }
             temp1=temp1.next;
            
        }
        
        if(temp2==null && temp1==null && carry!=0){
            Node n=new Node(carry);
                n.next=head;
                head=n;
        }
        
        while(temp2!=null){
            int value2=temp2.data;
            
            int sum=value2+carry;
            int rem=sum%10;
            carry=sum/10;
            
            if(head==null){
                Node n=new Node(rem);
                head=n;
            }else{
                Node n=new Node(rem);
                n.next=head;
                head=n;
            }
             temp2=temp2.next;
            
        }
        
        return head;
        
    }
}