import java.util.Scanner;
public class String1 {
    public static void main(String args[])
    {
        @SuppressWarnings({ "resource", "unused" })
        Scanner sc = new Scanner(System.in);
        // Declaration ⁡⁢⁢⁢  
        String str = "Tony";
        System.out.println(str);

        // ⁡⁢⁢⁢input
        /*  if space is not given⁡ */

        // String name = sc.next();
        // System.out.println(name);

        /* taking a line as an input */

        // String name1 = sc.nextLine();
        // System.out.println(name1);
        
        /*  Concatination */
        String firstname = "Tony";
        String lastname = "Stark";
         /*  without space */
        String fullname = firstname+lastname;
        System.out.println(fullname);
        /*  with spaces */
        String fullname1 = firstname + " " + lastname;
        System.out.println(fullname1);
        

        /*  charAt in string */
        for(int i=0;i<fullname.length();i++)
        {
            System.out.println(fullname.charAt(i));
        }

        /* compare 
         * s1>s2 : +ve value
         * s1==s2 : 0
         *  s1<s2 : -ve value
        */
        String name1 = "Tony";
        String name2 = "Tony";
        if(name1.compareTo(name2)==0){
            System.out.println("Strings are equal");
        } else{
            System.out.println("Strings are not equal");
        }

    }
}
