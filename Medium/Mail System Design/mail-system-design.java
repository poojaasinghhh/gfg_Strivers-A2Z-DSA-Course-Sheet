//{ Driver Code Starts
// Initial Template for Java

import java.io.*;
import java.util.HashMap;
import java.util.*;

class Node{
    int data;
    Node left;
    Node right;	
    Node(int x){
    	this.data = x;
    }
}

class GFG{
    public static void main(String args[])throws IOException
    {
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(in.readLine());
        while(t-- > 0){
            String a[] = in.readLine().trim().split("\\s+");
            int N = Integer.parseInt(a[0]);
            int Q = Integer.parseInt(a[1]);
            String a1[] = in.readLine().trim().split("\\s+");
            int query[] = new int[2*Q];
            for(int i = 0;i < 2*Q;i++)
                query[i] = Integer.parseInt(a1[i]);
            
            Solution ob = new Solution();
            List<Node> ans = new ArrayList<Node>();
            ans = ob.mailDesign(N, Q, query);
            for(int i = 0;i < 3;i++){
                if(ans.get(i) == null)
                    System.out.println("EMPTY");
                else{
                    Node p = ans.get(i);
                    while(p != null){
                        System.out.print(p.data + " ");
                        p = p.right;
                    }
                    System.out.println();
                }
            }
        }
    }
}
// } Driver Code Ends


// User function Template for Java
/*Given below is the structure of node class:
the list moves from left to right
class Node{
    int data;
    Node left;
    Node right;	
    Node(int x){
    	this.data = x;
    }
}*/

class LinkedList{
    Node head;
    int size;
    void addLast(int val){
        Node temp = new Node(val);
        temp.right = null;
        if (size==0)
        {
            head = temp;
            size++;
            return;
        }
        Node last = head;
        while (last.right != null)
            last = last.right;
        last.right = temp;
        size++;
        return;
    }
    void remove(int key){
        Node temp = head, prev = null;
        if (temp != null && temp.data == key) {
            head = temp.right;
            size--;
            return;
        }
        while (temp != null && temp.data != key) {
            prev = temp;
            temp = temp.right;
        }
        if (temp == null)
            return;
        prev.right = temp.right;
        size--;
    }
}
class Solution{
    
    static List<Node> mailDesign(int N, int Q, int query[]){
        LinkedList unread = new LinkedList();
        for(int i=1;i<=N;i++){
            unread.addLast(i);
        }
        LinkedList read = new LinkedList();
        LinkedList trash = new LinkedList();
        for(int i=0;i<query.length;i=i+2){
            if(query[i]==1){
                read.addLast(query[i+1]);
                unread.remove(query[i+1]);
            }
            else if(query[i]==2){
                trash.addLast(query[i+1]);
                read.remove(query[i+1]);
            }
            else if(query[i]==3){
                trash.addLast(query[i+1]);
                unread.remove(query[i+1]);  
            }
            else if(query[i]==4){
                read.addLast(query[i+1]);
                trash.remove(query[i+1]);
            }
        }
        ArrayList<Node> list = new ArrayList<>();
        list.add(unread.head);
        list.add(read.head);
        list.add(trash.head);
        return list;
    }
}