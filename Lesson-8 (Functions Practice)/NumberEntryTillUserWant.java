import java.util.Scanner;
public class NumberEntryTillUserWant {
    public static void countNumberIfPositiveOrnegativeorzero(int n)
    {
        int positiveNumber = 0;
        int NegativeNumber = 0;
        int ZeroNumber = 0;
        for(int i=0;i<n;i++)
        {
            @SuppressWarnings("resource")
            Scanner sc = new Scanner(System.in);
            int a = sc.nextInt();
            if(a>0) positiveNumber++;
            else if(a<0) NegativeNumber++;
            else ZeroNumber++;
        }

        System.out.println("Total Number of Positive Number: "+positiveNumber);
        System.out.println("Total Number of Negative Number: "+NegativeNumber);
        System.out.println("Total Number of Zero: "+ZeroNumber);
    }
    public static void main(String args[])
    {
        @SuppressWarnings("resource")
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the amount of number you want to enter: ");
        int n = sc.nextInt();
        countNumberIfPositiveOrnegativeorzero(n);
        
    }
}
