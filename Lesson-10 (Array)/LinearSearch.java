import java.util.Scanner;
public class LinearSearch {
    public static void main(String args[])
    {
        @SuppressWarnings("resource")
        Scanner sc = new Scanner(System.in);
        int size = sc.nextInt();
        int arr[] = new int[size];
        for(int i=0;i<size;i++) arr[i]=sc.nextInt();
        int x = sc.nextInt();
        for(int i=0;i<arr.length;i++)
        {
            if(arr[i]==x)
            {
                System.out.println("Element is found at index: "+i);
            }
        }
    }
}
