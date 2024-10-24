public class SetBit {
    public static void main(String args[])
    {
        int n = 5;  // 0101
        int pos = 1;
        int bitmask = 1<<pos;
        int number = bitmask | n; // after setting the 1st bit, the number we get is 0111=> 7
        System.out.println(number);
    }
}
