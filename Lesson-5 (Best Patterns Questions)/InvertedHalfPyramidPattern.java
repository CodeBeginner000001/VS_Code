import java.util.Scanner;
public class InvertedHalfPyramidPattern {
    public static void main(String[] args) {
        {
            @SuppressWarnings("resource")
            Scanner sc = new Scanner(System.in);
            int n = sc.nextInt();
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
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
}
