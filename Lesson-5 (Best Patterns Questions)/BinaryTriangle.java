import java.util.Scanner;
public class BinaryTriangle {
    public static void main(String[] args) {
        @SuppressWarnings("resource")
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++)
            {
                if(j<=i)
                {
                    if((i+j)%2==0)
                    {
                        System.out.print("1 ");
                    }else
                    {
                        System.out.print("0 ");
                    }
                }
            }
            System.out.println();
        }
    }
}
