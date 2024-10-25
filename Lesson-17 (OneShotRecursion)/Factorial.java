
import java.util.Scanner;

public class Factorial {
    public static int factorialNumber(int n)
    {
        // base case
        if(n==1)
        {
            return 1;
        }
        // calculation
        int answer;
        // recursive call
        answer = n*factorialNumber(n-1);
        return answer;
    }
    public static void main(String args[])
    {
        @SuppressWarnings("resource")
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int result = factorialNumber(n);
        System.out.println("The factorial of the number "+n+" is: "+result);
    }   
}
