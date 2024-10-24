public class StringsMethods {
    public static void main(String args[])
    {
        /* Compare
         * s1 > s2 : +ve value
         * s1 == s2 : 0
         * s1 < s2 : -ve value
         */
        String name1 = "hello";
        String name2 = "cello";

        // hello > cello because h comes after c which is considered big
        if(name1.compareTo(name2) == 0)
        {
            System.out.println("Strings are equal");
        }
        else if(name1.compareTo(name2)>0)
        {
            System.out.println("String 1 is greater than String 2");
        }
        else if (name1.compareTo(name2)<0)
        {
            System.out.println("String 1 is smaller than string 2");
        }

        /* Substring  */
        String name = "I love coding";
        System.out.println(name.substring(7,name.length()));

        /* Parsing Int: changing string to integer */
        String str = "123";
        int number = Integer.parseInt(str);
        System.out.println(number);

        /* Parsing string : changing int to string */
        int number1 = 123467;
        String str1 = Integer.toString(number1);
        System.out.println(str1);
    }
}
