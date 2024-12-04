import java.util.Scanner;

public class RemoveNthNode_FromLast {
    Node head;

    class Node {
        int data;
        Node next;

        Node(int data) {
            this.data = data;
            this.next = null;
        }
    }

    // to add the integer data in the linked list
    public void push(int data) {
        Node newNode = new Node(data);
        if (head == null) {
            head = newNode;
            return;
        }
        Node currentNode = head;
        while (currentNode.next != null) {
            currentNode = currentNode.next;
        }
        currentNode.next = newNode;
    }

    // To print the linked list
    public void printlist() {
        if (head == null) {
            System.out.println("List is empty");
            return;
        }
        Node currentNode = head;
        while (currentNode != null) {
            System.out.print(currentNode.data + " -> ");
            currentNode = currentNode.next;
        }
        System.out.println("null");
    }

    // to size of the linked list
    public int Size() {
        int count = 0;
        Node currentNode = head;
        while (currentNode != null) {
            count++;
            currentNode = currentNode.next;
        }
        return count;
    }

    public void removeFromLast(int size, int nodeTobeRemoved) {
        if (head == null) {
            System.out.println("List is empty");
        }
        if (size == 1 && nodeTobeRemoved == 1) {
            System.out.println("null");
        }
        if (nodeTobeRemoved == size) {
            head = head.next;
            return;
        }
        Node prev = head;
        int i = 1;
        while (i < (size - nodeTobeRemoved)) {
            prev = prev.next;
            i++;
        }
        // System.out.println(prev.data);
        prev.next = prev.next.next;
    }

    // to find the nth node from the last
    public static void main(String args[]) {
        RemoveNthNode_FromLast list = new RemoveNthNode_FromLast();
        Scanner sc = new Scanner(System.in);
        int nodeTobeRemoved = sc.nextInt();
        list.push(1);
        list.push(2);
        list.push(3);
        list.push(4);
        list.push(5);
        list.printlist();
        int size = list.Size();
        list.removeFromLast(size, nodeTobeRemoved);
        list.printlist();

    }
}
