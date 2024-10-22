import java.util.Scanner;
public class NumberRaisedToThePowerFunction {
    public static int power(int x , int n)
    {
        if(n==0) return 1;
        if(n<0) return 0;
        // Recursive case: x^n = x * x^(n-1)
        return x * power(x, n-1);
    }
    public static void main(String args[])
    {
        @SuppressWarnings("resource")
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();
        int n = sc.nextInt();
        int result = power(x, n);
        System.out.println("Result is : " + result);
    }
}
