public class Palindrome {
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

    public static void main(String args[]) {
        Palindrome list = new Palindrome();
        list.add(1);
        list.add(2);
        list.add(1);
        list.print();
        System.out.println(list.isPalindrome());
    }
}
