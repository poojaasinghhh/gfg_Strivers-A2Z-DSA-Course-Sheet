//{ Driver Code Starts
import java.io.*;
import java.util.*;

class Node 
{
    int data;
    Node next;
    
    Node(int a)
        {
            data = a;
            next = null;
        }
}

class GfG
{
    static Scanner sc = new Scanner(System.in);
    
    public static Node inputList(int size)
    {
        Node head, tail;
        int val;
        
        val = sc.nextInt();
        
        head = tail = new Node(val);
        
        size--;
        
        while(size-->0)
        {
            val = sc.nextInt();
            tail.next = new Node(val);
            tail = tail.next;
        }
        
        return head;
    }
    
    public static void printList(Node n)
    {
        while(n!=null)
        {
            System.out.print(n.data + " ");
            n = n.next;
        }
    }
    
    public static void main(String args[])
    {
        int t = sc.nextInt();
        while(t-->0)
        {
            int n , m;
            
            n = sc.nextInt();
            Node head1 = inputList(n);
            
            m = sc.nextInt();
            Node head2 = inputList(m);
            
            Sol obj = new Sol();
            
            printList(obj.findUnion(head1, head2));
            System.out.println();
        }
    }
}
// } Driver Code Ends


/*
    class Node
    {
        int data;
        Node next;
        Node(int d) {data = d; next = null; }
    }
*/

class Sol
{
	public static Node findUnion(Node head1,Node head2)
	{
	    //Add your code here.
        // Create a HashSet to store unique elements
        HashSet<Integer> set = new HashSet<>();

        // Traverse the first linked list and add elements to the set
        Node temp1 = head1;
        while (temp1 != null) {
            set.add(temp1.data);
            temp1 = temp1.next;
        }

        // Traverse the second linked list and add elements to the set
        Node temp2 = head2;
        while (temp2 != null) {
            set.add(temp2.data);
            temp2 = temp2.next;
        }

        // Convert the HashSet to an ArrayList for sorting
        ArrayList<Integer> list = new ArrayList<>(set);

        // Sort the ArrayList in ascending order
        Collections.sort(list);

        // Create a new linked list from the sorted ArrayList
        Node dummy = new Node(0);
        Node current = dummy;
        for (int num : list) {
            current.next = new Node(num);
            current = current.next;
        }

        return dummy.next; // Return the head of the new list
    }
}