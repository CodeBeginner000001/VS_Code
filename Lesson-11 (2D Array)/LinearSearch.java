import java.util.Scanner;
public class LinearSearch {
    public static void main(String args[])
    {
        @SuppressWarnings("resource")
        Scanner sc = new Scanner(System.in);
        int row = sc.nextInt();
        int col = sc.nextInt();
        int[][] arr = new int[row][col];
        // input
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                arr[i][j] = sc.nextInt();
            }
        }

        System.out.println(" ");

        int x = sc.nextInt();

        for(int i=0;i<arr[0].length;i++)
        {
            for(int j=0;j<arr.length;j++)
            {
                if(arr[i][j]==x)
                {
                    System.out.println("Element is present at index ( "+i+" , "+j+" )");
                    break;
                }
            }
        }
    }
}
