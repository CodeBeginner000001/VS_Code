public class Linked_list{
    Node head;
class Node {
    int data;
    Node next;

    Node(int data) {
        this.data = data;
        this.next = null;
    }

    }

    // to add in linkedlist
    public void add(int data) {
        Node newNode = new Node(data);
        if (head == null) {
            head = newNode;
            return;
        }
        Node currNode = head;
        while (currNode.next != null) {
            currNode = currNode.next;
        }
        currNode.next = newNode;
    }

    // to print
    public void print() {
        if (head == null) {
            System.out.println("List is empty");
            return;
        }
        Node currNode = head;
        while (currNode != null) {
            System.out.print(currNode.data + " -> ");
            currNode = currNode.next;
        }
        System.out.println("null");
    }

    // to reverse
    public Node reverse(Node head) {
        Node prev = null;
        Node curr = head;
        while (curr != null) {
            Node Next = curr.next;
            // update
            curr.next = prev;
            prev = curr;
            curr = Next;
        }
        return prev;
    }

    // to find middle
    public Node findMiddle(Node head) {
        Node hare = head;
        Node turtle = head;
        while (hare.next != null && hare.next.next != null) {
            hare = hare.next.next;
            turtle = turtle.next;
        }
        return turtle;
    }

    // to check palindrome
    public boolean isPalindrome() {
        if (head == null || head.next == null) {
            return true;
        }
        Node middle = findMiddle(head); // in a way ki hume 1st half the end mile
        Node SeondHalfStart = reverse(middle.next);
        Node FirstHalfStart = head;
        while (SeondHalfStart != null) {
            if (FirstHalfStart.data != SeondHalfStart.data) {
                return false;
            }
            FirstHalfStart = FirstHalfStart.next;
            SeondHalfStart = SeondHalfStart.next;
        }
        return true;
    }

    // to check Linked List Cycle
    public boolean hasCycle() {
        if (head == null)
            return false;
        Node hare = head; // fast
        Node turtle = head; // slow
        while (hare != null && hare.next != null) {
            hare = hare.next.next;
            turtle = turtle.next;

            if (hare == turtle)
                return true;
        }
        return false;
    }

    public static void main(String args[]) {
        Linked_list list = new Linked_list();
        list.add(1);
        list.add(2);
        list.add(3);

         /*  Create a cycle: link the last node (5) to the node with value 2 */
         
        // Node secondNode = list.head.next; // This is the node with value 2
        // Node lastNode = list.head;
        // while (lastNode.next != null) {
        //     lastNode = lastNode.next; // Traverse to the last node
        // }
        // lastNode.next = secondNode; // Create a cycle

        // list.print(); // This will print the list, but it will not terminate due to the cycle
        System.out.println(list.hasCycle()); // This should return true
    }
}