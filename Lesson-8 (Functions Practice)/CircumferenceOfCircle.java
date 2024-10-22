import java.util.Scanner;
public class CircumferenceOfCircle {
    public static void FindCircumferenceofCircle(double r)
    {
        double ans = 2 * 3.14 * r;
        System.out.println("The circumference of the circle is: "+ans);
    }
    public static void main(String args[])
    {
        @SuppressWarnings("resource")
        Scanner sc = new Scanner(System.in);
        double r = sc.nextDouble();
        FindCircumferenceofCircle(r);
    }
}
