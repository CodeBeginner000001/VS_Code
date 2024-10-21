import java.util.Scanner;
public class Add2NumberFunction {
    public static int calculateSum(int a , int b)
    {
        return a+b;
    }
    public static void main(String[] args) {
        {
            @SuppressWarnings("resource")
            Scanner sc = new Scanner (System.in);
            int a = sc.nextInt();
            int b = sc.nextInt();
            System.out.println("Sum of 2 numbers is : "+calculateSum(a,b));
        }
    }
}
