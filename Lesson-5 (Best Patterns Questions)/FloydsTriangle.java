import java.util.Scanner;
public class FloydsTriangle {
    public static void main(String[] args) {
        @SuppressWarnings("resource")
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int count=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++){
                if(j<=i)
                {
                    if(count<9)
                    {
                        System.out.print(" ");
                    }
                    System.out.print((count+=1)+" ");
                }
            }
            System.out.println();
        }
    }
}
