import java.util.Scanner;
public class SolidRhombus {
    public static void main(String[] args) {
        @SuppressWarnings("resource")
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if((i+j)>=n-1)
                {
                    System.out.print("* ");
                }
                else{
                    System.out.print("  ");
                }
            }
            for(int j=1;j<n;j++)
            {
                if((i+j)<n)
                {
                    System.out.print("* ");
                }
            }
            System.out.println();
        }
    }
}
