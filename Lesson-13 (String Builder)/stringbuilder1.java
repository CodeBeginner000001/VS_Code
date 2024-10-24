public class stringbuilder1 {
    public static void main(String args[])
    {
        StringBuilder sb = new StringBuilder("Hello");
        int i = 0;
        int j = sb.length()-1;
        while(i<j)
        {
            int front = i;
            int back = j;

            char frontChar = sb.charAt(front);
            char backChar = sb.charAt(back);

            sb.setCharAt(front,backChar);
            sb.setCharAt(back,frontChar);
            i++;
            j--;
        }
        System.out.println(sb);
    }
}
