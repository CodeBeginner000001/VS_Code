
import java.util.Scanner;

public class xPowerN_Optimized {
    // time complexity : O(logn)
    public static int powernumber(int x, int n)
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
        // calculation & recursive call
        int answer;
        if(n%2==0) //even
        {
            answer = powernumber(x, n/2) * powernumber(x,n/2);
        }
        else //odd
        {
            answer = x * powernumber(x,n/2) * powernumber(x,n/2);
        }
        return answer;
    }
    public static void main(String args[])
    {
        @SuppressWarnings("resource")
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();
        int n = sc.nextInt();
        int result = powernumber(x,n);
        System.out.println(result);
    }
}
