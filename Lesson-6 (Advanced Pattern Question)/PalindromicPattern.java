import java.util.Scanner;
public class PalindromicPattern {
    public static void main(String[] args)
    {
        @SuppressWarnings("resource")
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for(int i=0;i<=n;i++)
        {
            for(int j=5;j>0;j--)
            {
                if(i>=j)
                {
                    System.out.print(j+" ");
                }
                else{
                    System.out.print("  ");
                }
            }
            for(int j=2;j<=n;j++)
            {
                if(j<=i)
                {
                    System.out.print(j+" ");
                }
                else{
                    System.out.print("  ");
                }
            }
            System.out.println();
        }
    }
}
