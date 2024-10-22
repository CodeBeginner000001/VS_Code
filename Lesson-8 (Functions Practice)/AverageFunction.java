import java.util.Scanner;
public class AverageFunction {
    public static void average(int a,int b,int c)
    {
        int average = (a+b+c)/3;
        System.out.println("The average of three numbers is: "+average);
    }
    public static void main(String args[])
    {
        @SuppressWarnings("resource")
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        int c = sc.nextInt();
        average(a,b,c);
    }
}
