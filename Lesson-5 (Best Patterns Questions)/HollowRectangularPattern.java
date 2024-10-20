import java.util.Scanner;
public class HollowRectangularPattern {
    public static void main(String[] args){
        @SuppressWarnings("resource")
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for(int i=0;i<n-1;i++)
        {
            for(int j=0;j<n;j++)
            {
                if((i==0) || (i==n-2) || (j==0) || (j==n-1))
                {
                    System.out.print("* ");
                }else{
                    System.out.print("  ");
                }
            }
            System.out.println();
        }
    }
}
