import java.util.Scanner;
public class Multiply2NumberFunction {
    public static int Multiply(int a , int b)
    {
        return a*b;
    }
    public static void main(String args[])
    {
        @SuppressWarnings("resource")
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        System.out.println("Multiplication of 2 Number : "+Multiply(a,b));
    }
}
