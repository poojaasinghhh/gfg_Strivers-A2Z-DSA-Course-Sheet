//{ Driver Code Starts
/*package whatever //do not write package name here */

import java.io.*;
import java.util.*;

class Node {
    char data;
    Node next;
    
    public Node(char data){
        this.data = data;
        next = null;
    }
}

class GFG {
	public static void main (String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t-- > 0){
		    int n = sc.nextInt();
		    Node head = null, tail = null;
		    
		    char head_c = sc.next().charAt(0);
		    head = new Node(head_c);
		    tail = head;
		    
		    while(n-- > 1){
		        tail.next = new Node(sc.next().charAt(0));
		        tail = tail.next;
		    }
		    
		    Solution obj = new Solution();
		    //show(head);
		    show(obj.arrangeCV(head));
		    
		}
	}
	
	public static void po(Object o){
	    System.out.println(o);
	}
	
	public static void show(Node head){
        while(head != null){
            System.out.print(head.data+" ");
            head = head.next;
        }
        System.out.println();
    }
}

// } Driver Code Ends


/*
Structure of node class is:
class Node {
    char data;
    Node next;
    
    public Node(char data){
        this.data = data;
        next = null;
    }
}
*/
class Solution {
    
    public Node arrangeCV(Node head){
        //write code here and return the head of changed linked list
        ArrayList<Character> v=new ArrayList<>();
       ArrayList<Character> cons=new ArrayList<>();
        Node temp=head;
        
        while(temp!=null){
            char c=temp.data;
            if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
                v.add(c);
            }else{
                cons.add(c);
            }
            
            temp=temp.next;
        }
        
        temp=head;
        int i=0,j=0;
        while(temp!=null){
            if(i!=v.size()){
               temp.data=v.get(i);
               temp=temp.next;
               i++;
               }else{
                temp.data=cons.get(j);
                temp=temp.next;
               j++;
            }
            
            
        }
        
        return head;
    }
}