import java.util.Scanner;
public class InputInArray {
    public static void main(String args[])
    {
        @SuppressWarnings("resource")
        Scanner sc = new Scanner(System.in);
        int size = sc.nextInt();
        int[] numbers = new int[size];
        // Input
        for(int i=0;i<size;i++) numbers[i]=sc.nextInt();
        // Display
        for(int i=0;i<size;i++) System.out.print(numbers[i]+" ");
        System.out.println();
    }
}
