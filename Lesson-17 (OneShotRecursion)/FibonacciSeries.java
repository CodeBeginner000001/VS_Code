
import java.util.Scanner;


public class FibonacciSeries {
    public static void fibonacciseries(int a , int b , int n)
    {
        // base case
        if(n==0)
        {
            System.out.println();
            return ; // stop recursion
        }
        // calculation
        int c = a + b;
        System.out.print(c+" ");
        a = b;
        b = c;
        // Recursive call
        fibonacciseries(a, b, n-1);
    }
    public static void main(String args[])
    {
        @SuppressWarnings("resource")
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int a = 0, b = 1;
        System.out.print("Fibonacci Series: "+a+" "+b+" "); 
        fibonacciseries(a,b,n-2);
    }
}
