public class LL_sketch {
    Node head;
    private int size;

    LL_sketch() {
        this.size = 0;
    }

    class Node {
        String data;
        Node next;

        Node(String data) {
            this.data = data;
            this.next = null;
            size++;
        }
    }

    public void addItem(String data) {
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

    public int getsize() {
        return size;
    }

    public void printList() {
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
    public void reverseList(){
        if(head==null || head.next == null){
            return;
        }
        Node prev = head;
        Node current = head.next;
        while(current != null){
            Node nextNode = current.next;
            current.next = prev;
            // update
            prev = current;
            current = nextNode;
        }
        head.next = null;
        head = prev;
    }
    public Node reverseRecursive(Node head){
        if(head == null || head.next == null)
        {
            return head;
        }
        Node newhead = reverseRecursive(head.next);
        head.next.next = head;
        head.next = null;
        return newhead;
    }
    public static void main(String args[]) {
        LL_sketch list = new LL_sketch();
        list.addItem("1");
        list.addItem("2");
        list.addItem("3");
        list.addItem("4");
        list.addItem("5");
        // From scratch
        // list.reverseList();
        list.printList();
        // Using Recursion
        list.head = list.reverseRecursive(list.head);
        list.printList();

    }
}