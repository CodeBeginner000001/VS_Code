import java.util.Scanner;
public class SumAllOddNumberFunction {
    public static void SumOddNumber(int n)
    {
        int sum = 0;
        for(int i = 1;i<=n;i++)
        {
            if(i%2!=0)
            {
                sum+=i;
            }
        }
        System.out.println("Sum of all odd numbers is: "+sum);
    }
    public static void main(String args[])
    {
        @SuppressWarnings("resource")
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        SumOddNumber(n);
    }
}
