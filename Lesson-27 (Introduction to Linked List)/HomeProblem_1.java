public class HomeProblem_1{
    Node head;
    private int size;
    HomeProblem_1() {
        this.size=0;
    }
    class Node{
        String data;
        Node next;

        Node(String data){
            this.data = data;
            this.next = null;
            size++;
        }
    }
    public void addFirst(String data){
        Node newNode = new Node(data);
        if(head == null)
        {
            head = newNode;
            return;
        }
        newNode.next = head;
        head = newNode;
    }
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
    public void printList(){
        if(head == null)
        {
            System.out.println("List is empty");
            return;
        }
        Node currentNode = head;
        while(currentNode!=null){
            System.out.print(currentNode.data+" -> ");
            currentNode = currentNode.next;
        }
        System.out.println("null");
    }       
    public int getSize(){
        return size;
    }
    public int search(String data)
    {
        int i=0;
        if(head == null)
        {
            System.out.println("List is empty");
            return 0;
        }
        Node currNode = head;
        while(currNode != null)
        {
            if(currNode.data.equals(data)){
                return i;
            }
            i++;
            currNode = currNode.next;
        }
        return 0;
    }
    public static void main(String[] args) {
        HomeProblem_1 list = new HomeProblem_1();
        list.addLast("1");
        list.addLast("5");
        list.addLast("7");
        list.addLast("3");
        list.addLast("8");
        list.addLast("2");
        list.addLast("3");
        list.printList();
        System.out.println(list.search("2"));
    }
}