//{ Driver Code Starts
//Initial Template for Java

import java.util.*;
class Node{
    int data;
    Node next;
    Node(int d){
        data=d;
        next=null;
    }
}
class Zeroes{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0){
            int n=sc.nextInt();
            Node head=null;
            Node curr=null;
            while(n-->0){
                int a=sc.nextInt();
                if(head==null){
                    head=new Node(a);
                    curr=head;
                }
                else{
                    Node temp=new Node(a);
                    temp.next=null;
                    curr.next=temp;
                    curr=temp;
                }
            }
            GfG g=new GfG();
            head = g.moveZeroes(head);
            while(head!=null){
                System.out.print(head.data+" ");
                head=head.next;
            }
            System.out.println();
        }
    }
}


// } Driver Code Ends


//User function Template for Java

/*
class Node{
    int data;
    Node next;
    Node(int d){
        data=d;
        next=null;
    }
}
*/

class GfG{
    public Node moveZeroes(Node head){
        //Your Code here.
        ArrayList<Integer>ans=new ArrayList<>();
        Node temp=head;
        int cnt=0;
        while(temp!=null){
            if(temp.data==0){
                cnt++;
            }else{
                ans.add(temp.data);
            }
            temp=temp.next;
        }
        
        temp=head;
        int i=0;
        while(i!=ans.size()){
            if(cnt!=0){
                temp.data=0;
                cnt--;
            }else{
                temp.data=ans.get(i);
                i++;
            }
            temp=temp.next;
        }
        
        return head;
        
    }
}