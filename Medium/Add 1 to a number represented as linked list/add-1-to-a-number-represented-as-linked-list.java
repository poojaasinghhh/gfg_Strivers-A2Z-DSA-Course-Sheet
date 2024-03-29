//{ Driver Code Starts
import java.io.*;
import java.util.*;
class Node
{
    int data;
    Node next;
    
    Node(int x)
    {
        data = x;
        next = null;
    }
}
class GfG
{
    public static void printList(Node node) 
    { 
        while (node != null)
        { 
            System.out.print(node.data);
            node = node.next; 
        }  
        System.out.println();
    } 
    public static void main(String args[])throws IOException
        {
            Scanner sc = new Scanner(System.in);
            int t = sc.nextInt();
            while(t-->0)
                {
                    String s = sc.next();
                    Node head = new Node( s.charAt(0) - '0' );
                    Node tail = head;
                    for(int i=1; i<s.length(); i++)
                    {
                        tail.next = new Node( s.charAt(i) - '0' );
                        tail = tail.next;
                    }
                    Solution obj = new Solution();
                    head = obj.addOne(head);
                    printList(head); 
                }
        }
}
// } Driver Code Ends


/*
class Node{
    int data;
    Node next;
    
    Node(int x){
        data = x;
        next = null;
    }
} 
*/

class Solution
{
      public static Node reverse(Node head){
       Node current = head;
       Node prev = null;
       Node next = head.next;
       while(next!=null){
           current.next = prev;
           prev = current;
           current = next;
           next=next.next;
       }
       current.next = prev;
       return current;
    }
    public static Node addOne(Node head) 
    { 
        //code here.
         head=reverse(head);
        
        Node temp=head;
        int sum=0;
        int carry=1;
        while(temp!=null){
            sum=temp.data+carry;
            if(sum<10){
                temp.data=sum;
                carry=0;
            }else{
                carry=1;
                temp.data=0;
            }
            
            temp=temp.next;
        }
        
        
        
        head=reverse(head);
        if(carry!=0){
            Node neww=new Node(1);
            neww.next=head;
            head=neww;
        }
        
        return head;
        
    }
}
