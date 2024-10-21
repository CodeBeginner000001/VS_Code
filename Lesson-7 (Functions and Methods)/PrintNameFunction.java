import java.util.Scanner;
public class PrintNameFunction{
    public static void printname(String n){
        System.out.println(n);
    }
    public static void main(String[] args) {
        {
            @SuppressWarnings("resource")
            Scanner sc = new Scanner (System.in);
            String name = sc.nextLine();
            printname(name);
        }
    }
}