import java.util.Scanner;
public class GreaterIn2Number {
    public static void findGreater(int a , int b)
    {
        if(a>b) System.out.println("Greater number among two is: "+a);
        else System.out.println("Greater number among two is: "+b);
    }
    public static void main(String args[])
    {
        @SuppressWarnings("resource")
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        findGreater(a,b);
    }
}
