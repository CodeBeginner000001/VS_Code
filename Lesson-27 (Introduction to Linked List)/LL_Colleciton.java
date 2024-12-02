import java.util.LinkedList;
public class LL_Colleciton {

 public static void main(String args[]){
    LinkedList<String> list = new LinkedList<String>();
    list.addFirst("a");
    list.addFirst("is");
    System.out.println(list);

    list.addFirst("this");
    list.addLast("Last Node"); 
// or list.add("Last Node") by default add in linkedlist means add in last
    System.out.println(list);

    // Size
    System.out.println(list.size());

    // print the linkedlist
    for(int i=0;i<list.size();i++)
    {
        System.out.print(list.get(i)+" -> ");
    }
    System.out.println("null");

    // remove from index
    list.remove(2);
    System.out.println(list);

    // remove first - delete from beginning
    list.removeFirst();
    System.out.println(list);

    list.removeLast();
    System.out.println(list);
}    
}
