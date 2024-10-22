import java.util.Scanner;
public class GreatesCommonDivisorFunction {
    public static void findGCD(int a,int b)
    {
        int gcd = 0;
        for(int i=1;i<=a && i<=b;i++)
        {
            if((a%i==0) && (b%i==0)) gcd=i;
        }
        System.out.println("The GCD of "+a+" and "+b+" is "+gcd);
    }
    public static void main(String args[])
    {
        @SuppressWarnings("resource")
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        findGCD(a,b);
    }
}
