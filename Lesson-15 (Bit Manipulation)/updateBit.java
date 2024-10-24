import java.util.Scanner;
public class updateBit {
    public static void main(String args[])
    {
        @SuppressWarnings("resource")
        Scanner sc = new Scanner(System.in);
        int oper = sc.nextInt();
        /*  
        oper = 1: set 
        oper = 0 : clear
        */
        int n = 5; // 0101
        int pos = 1;

        int bitmask = 1<<pos; // 0010
        if(oper == 1)
        {
            // set
            int newNumber = bitmask | n; // 0111
            System.out.println(newNumber);
        }
        else 
        {
            // clear
            int newBitMask = ~(bitmask); //1101
            int newNumber = newBitMask & n; // 0101
            System.out.println(newNumber);
        }
    }
}
