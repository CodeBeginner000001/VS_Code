public class PrintNumber1{
    public static void printnumber(int n)
    {
        // base case
        if(n>5) return;
        // print number
        System.out.println(n);
        // recursive call
        printnumber(n+1);
    }
    public static void main(String args[])
    {
        int n = 1;
        printnumber(n);

    }
}
