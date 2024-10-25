
import java.util.Scanner;

public class SumOf_n_NaturalNumber {
    public static void CalSum(int sum , int n)
    {
        // base case
        if(n==0)
        {
            System.out.println("The sum of first n natural number is : "+sum);
            return;
        }
        // calculation
        sum+=n;
        // recursion call
        CalSum(sum, n-1);
    }
    public static void main(String args[])
    {
        @SuppressWarnings("resource")
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int sum = 0;
        CalSum(sum,n);
    }
}
