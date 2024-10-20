import java.util.Scanner;
public class MultipleOf_N_number {
    public static void main(String[] args) {
        @SuppressWarnings("resource")
        Scanner sc = new Scanner (System.in);
        int n = sc.nextInt();
        for(int i=0;i<=10;i++)
        {
            int mul = n*i;
            System.out.println(n+" X "+i+" = "+" "+mul);
        }
    }
}
