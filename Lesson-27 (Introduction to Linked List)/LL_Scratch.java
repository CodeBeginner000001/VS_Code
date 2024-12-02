public class LL_Scratch{
    Node head;
    private int size;
    LL_Scratch(){
        this.size = 0;
    }
    class Node {
        String data;
        Node next;

        Node(String data){ 
            this.data = data;
            this.next = null;
            size++;
        }
    }
    
    // add - first (at beginning of the linklist)
    public void addFirst(String data){
         Node newNode = new Node(data);
         if(head == null){
            head = newNode;
            return;
         }
         newNode.next = head;
         head = newNode;
    }
    // add - last (at the end of the linklist)
    public void addLast(String data){
        Node newNode = new Node(data);
        if(head == null){
            head = newNode;
            return;
        }
         Node currNode = head;
         while(currNode.next != null){
            currNode = currNode.next;
         }
         currNode.next = newNode;
    }

    // print list
    public void printList(){
        if(head == null){
            System.out.println("List is empty");
            return;
        }
        Node currentNode = head;
        while(currentNode != null){
            System.out.print(currentNode.data+" -> ");
            currentNode = currentNode.next;
        }
        System.out.println("null");
    }

    // delete first ( delete from the beginning of linklist)
    public void deleteFirst(){
        if(head == null){
            System.out.println("List is empty");
            return;
        }
        size--;
        head = head.next;
    }

    // delete last (delete from the end of linklist)
    public void deleteLast(){
        if(head == null){
            System.out.println("List is empty");
            return;
        }
        size--;
        if(head.next ==null){
            head = null;
            return;
        }
        Node secondLast = head;
        Node LastNode = head.next; //head.next = null ->lastnode = node
        while(LastNode.next != null){
            secondLast = LastNode;
            LastNode = LastNode.next;
        }
        secondLast.next = null;
    }

    // size of the linklist
    public int getSize(){
        return size;
    }
    public static void main(String args[]){
        LL_Scratch list = new LL_Scratch();
        list.addFirst("a");
        list.addFirst("is");
        list.printList();
        
        list.addLast("LastNode");
        list.printList();

        list.addFirst("This");
        list.printList();

        list.deleteFirst();
        list.printList();

        list.deleteLast();
        list.printList();

        // size of the linklist
        System.out.println(list.getSize());
        list.addFirst("this");
        System.out.println(list.getSize());

    }
}
