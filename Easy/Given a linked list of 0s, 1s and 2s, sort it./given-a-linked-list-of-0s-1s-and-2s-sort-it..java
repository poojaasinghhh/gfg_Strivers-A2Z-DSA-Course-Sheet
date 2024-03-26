//{ Driver Code Starts
//Initial Template for Java

import java.util.*;
import java.lang.*;
import java.io.*;

class Node
{
    int data;
    Node next;
    Node(int key)
    {
        data = key;
        next = null;
    }
}

class Driverclass
{
    public static void main (String[] args) throws IOException
    {
        BufferedReader in=new BufferedReader(new InputStreamReader(System.in));
        PrintWriter out=new PrintWriter(System.out);
        int t = Integer.parseInt(in.readLine().trim());
        
        while(t-- > 0)
        {
            int n =Integer.parseInt(in.readLine().trim());
            String s[] = in.readLine().trim().split(" ");
            Node head = new Node(Integer.parseInt(s[0]));
            Node tail = head;
            for (int i = 1; i < n; i++) {
                tail.next = new Node(Integer.parseInt(s[i]));
                tail = tail.next;
            }

            head = new Solution().segregate(head);
            printList(head, out);
            out.println();
        }
        out.close();
    }
    
    public static void printList(Node head,PrintWriter out)
    {
        if(head == null)
           return;
           
        Node temp = head;
        while(temp != null)
        {
            out.print(temp.data + " ");
            temp = temp.next;
        }
    }
    
    
}




// } Driver Code Ends


//User function Template for Java

/*
class Node
{
    int data;
    Node next;
    Node(int data)
    {
        this.data = data;
        next = null;
    }
}
*/
class Solution
{
    //Function to sort a linked list of 0s, 1s and 2s.
    static Node segregate(Node head)
    {
        // add your code here
        
        Node ans0=new Node(-1);
        Node ans1=new Node(-1);
        Node ans2=new Node(-1);
        
        Node zero=ans0;
        Node one=ans1;
        Node two=ans2;
        Node temp=head;
        
        while(temp!=null){
            if(temp.data==0){
                Node tempp=new Node(temp.data);
                zero.next=tempp;
                zero=tempp;
                
            }else if(temp.data==1){
                Node tempp=new Node(temp.data);
                one.next=tempp;
                one=tempp;
            }else{
                Node tempp=new Node(temp.data);
                two.next=tempp;
                two=tempp;
            }
            
            temp=temp.next;
        }
        

            if(ans1.next!=null){
                zero.next=ans1.next;
                one.next=ans2.next;
            }else{
                zero.next=ans2.next;
            }
        
        return ans0.next;
    }
}


