
import java.util.ArrayList;
import java.util.Collections;

// Header file
class ArrayLists{
    public static void main(String args[]){
         /*
          * Integer - int
          * Float - float
          * String - String
          * Boolean - bool
          */
          ArrayList<Integer> list = new ArrayList<>(); // or 
        //   ArrayList<Integer> list = new ArrayList<Integer>(); 
        //   ArrayList<Boolean> list2 = new ArrayList<Boolean>();
        //   ArrayList<String> list3 = new ArrayList<>();
          
        /* add element */
        list.add(0);
        list.add(1);
        list.add(4);
        System.out.println(list);

        /* get elements */
        System.out.println(list.get(0));

        /* add element in between */
        list.add(2,2);
        System.out.println(list);

        /* set elements */
        list.set(0,9);
        System.out.println(list);

        /* delete element */
        list.remove(2);
        System.out.println(list);

        /* Size of the arraylist */
        System.out.println(list.size());

        /* loops */
        for(int i=0;i<list.size();i++)
        {
            System.out.print(list.get(i)+" ");
        }
        System.out.println();

        /* Sorting */
        Collections.sort(list);
        System.out.println(list);

        /*remove all */
        list.removeAll(list);
        System.out.println(list);
        
        /*clear */
        list.clear();
        System.out.println(list);
    }
}