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
    
    public static void main (String[] args) 
    {
        Scanner sc= new Scanner(System.in);
        int t = sc.nextInt();
        
        while(t-- > 0)
        {
            int n = sc.nextInt();
            Node head = new Node(sc.nextInt());
            Node tail = head;
            while(n-- > 1){
		        tail.next = new Node(sc.nextInt());
		        tail = tail.next;
		    }
		   
		      head = new Solution().mergeSort(head);
		     printList(head);
		    System.out.println();
        }
    }
    public static void printList(Node head)
    {
        if(head == null)
           return;
           
        Node temp = head;
        while(temp != null)
        {
            System.out.print(temp.data + " ");
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
    Node(int key)
    {
        this.data = key;
        next = null;
    }
} */

class Solution
{
    
            //Function to sort the given linked list using Merge Sort.
    static Node mergeSort(Node head)
    {
        // add your code here
        if (head == null || head.next == null) {
        return head;
    }

    Node mid = findMiddleNode(head);
    Node leftHead = head;
    Node rightHead = mid.next;
    mid.next = null; // Disconnect the left and right halves

    leftHead = mergeSort(leftHead);
    rightHead = mergeSort(rightHead);
    return merge(leftHead, rightHead);
    }
    static Node findMiddleNode(Node head) {
        if (head == null || head.next == null) {
            return head;
        }
        Node slow = head;
        Node fast = head.next; // head->next because we want slow to point to the
                           // first element/middle in the even length case

        while (fast != null && fast.next != null) {
            slow = slow.next;
            fast = fast.next.next;
        }
        return slow;
    }

    // merge linked list function
    static Node merge(Node list1Head, Node list2Head) {
    Node dummyNode = new Node(-1); // can be any value
    Node temp = dummyNode;

    while (list1Head != null && list2Head != null) {
        if (list1Head.data <= list2Head.data) {
            temp.next = list1Head;
            temp = list1Head;
            list1Head = list1Head.next;
        }
        else
        {
            temp.next = list2Head;
             temp = list2Head;
            list2Head = list2Head.next;
        }
    }

    // if list1 still has elements left
        while (list1Head != null) {
            temp.next = list1Head;
            temp = list1Head;
            list1Head = list1Head.next;
        }

    // if list2 still has elements left
        while (list2Head != null) {
            temp.next = list2Head;
            temp = list2Head;
            list2Head = list2Head.next;
        }
    return dummyNode.next;
    }
}


