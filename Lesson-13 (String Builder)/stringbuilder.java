public class stringbuilder {
    public static void main(String args[]) {
        // Declaration
        StringBuilder sb = new StringBuilder("I love coding");
        System.out.println(sb);

        // charAt - character at index 0
        System.out.println(sb.charAt(0));

        // setCharAt - set character at index 0
        sb.setCharAt(0,'P');
        System.out.println(sb);


        // insert - insert character at index 1
        sb.insert(1," a");
        System.out.println(sb);

        // delete - delete a character from index and end - n(where u want to stop)+1
        sb.delete (1,3);
        System.out.println(sb);

        // append - adding character at the end
        StringBuilder sb1 = new StringBuilder("H");
        System.out.println(sb1);
        sb1.append("e"); // str = str + 'e';
        sb1.append("l");
        System.out.println(sb1);
        sb1.append("l"); // str = str + 'l';
        sb1.append("o");
        System.out.println(sb1);
        // finding length of sb1
        System.out.println(sb1.length());
    }
}
