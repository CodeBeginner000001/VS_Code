import java.util.Scanner;
public class IsAdultFunction{
    public static String checkage(int age)
    {
        if(age > 18)
        {
            return "Adult";
        }
        return "Not an Adult";
    }
    public static void main(String args[])
    {
        @SuppressWarnings("resource")
        Scanner sc = new Scanner(System.in);
        int age = sc.nextInt();
        System.out.println(checkage(age));
    }
}