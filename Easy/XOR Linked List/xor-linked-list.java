//{ Driver Code Starts
import java.util.ArrayList;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        Solution soln = new Solution();
        while (t-- > 0) {
            Node head = null;
            int n = scanner.nextInt();

            while (n-- > 0) {
                int tmp = scanner.nextInt();
                head = soln.insert(head, tmp);
            }

            ArrayList<Integer> list = soln.printList(head);
            for (int x : list) System.out.print(x + " ");
            System.out.println();

            for (int i = list.size() - 1; i >= 0; i--) {
                System.out.print(list.get(i) + " ");
            }
            System.out.println();
        }
    }

   
}
class Node {
    int data;
    Node npx;

    Node(int x) {
        data = x;
        npx = null;
    }
}

// } Driver Code Ends


// class Node {
//     int data;
//     Node npx;

//     Node(int x) {
//         data = x;
//         npx = null;
//     }
// }
class Solution{
     // function should insert the data to the front of the list
    static Node insert(Node head, int data) {
        // Code Here.
           Node newNode = new Node(data);
       if (head == null)return newNode;
       newNode.npx = head;
       head = newNode;
       return head;
    }

    // function to print the linked list
    static ArrayList<Integer> printList(Node head) {
        // Code Here.
         ArrayList<Integer> list = new ArrayList<>();
         Node temp = head;
         while (temp != null) {
            list.add(temp.data);
            temp = temp.npx;
         }
      return list;
    }
}