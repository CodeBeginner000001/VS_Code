
import java.util.Scanner;

public class xPowerN {
    // time complexity: O(n)
    public static int powerNumber(int x, int n)
    {
        // base case
        if(n==0)
        {
            return 1;
        }
        if(x==0)
        {
            return 0;
        }
        // calculation
        int answer;
        // Recursive case
        answer = x * powerNumber(x, n-1); // Recursive call
        return answer;
    }
    public static void main(String args[])
    {
        @SuppressWarnings("resource")
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();
        int n = sc.nextInt();
        int result = powerNumber(x,n);
        System.out.println(result);
    }
}
