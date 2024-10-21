import java.util.Scanner;

public class FactorialFunction {
    public static int factorial(int n) {
        
        if (n == 0) {
            return 1;
        }
        int fact = 1;
        for (int i = 2; i <= n; i++) {
            fact*=i;
        }
        return fact;
    }

    public static void main(String args[])
    {
        @SuppressWarnings("resource")
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        System.out.println("Factorial of the number is: "+factorial(n));
    }
}
