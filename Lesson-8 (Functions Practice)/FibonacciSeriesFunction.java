import java.util.Scanner;
public class FibonacciSeriesFunction {
    public static void main(String args[])
    {
        @SuppressWarnings("resource")
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number of terms: ");
        int n = sc.nextInt();
        int a = 0;
        int b = 1;
        System.out.print("Fibonacci Series: "+a+" ");
        for(int i=0;i<n-1;i++)
        {
            System.out.print(b+" ");
            int temp = a+b;
            a = b;
            b = temp;
        }
        System.out.println();
    }
}
