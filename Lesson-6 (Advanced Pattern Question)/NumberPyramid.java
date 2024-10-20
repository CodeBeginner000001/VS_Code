import java.util.Scanner;
public class NumberPyramid {
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
                    if((i+j)%2==0)
                    {
                        System.out.print((i+1)+" ");
                    }else
                    {
                        System.out.print("  ");
                    }
                }else
                {
                    System.out.print("  ");
                }
            }
            for(int j = 1;j<n;j++)
            {
                if(j<=i)
                {
                    if((i+j)%2==0)
                    {
                        System.out.print((i+1)+" ");
                    }else
                    {
                        System.out.print("  ");
                    }
                }
            }
            System.out.println();
        }
    }
}
