public class PrintNumber{
    public static void printnumber(int n)
    {
        // base case
        if(n==0) return;
        // print the number
        System.out.println(n);

        // recursive call
        printnumber(n-1);
    }
    public static void main(String args[])
    {
        int n = 5;
        printnumber(n);
    }
}