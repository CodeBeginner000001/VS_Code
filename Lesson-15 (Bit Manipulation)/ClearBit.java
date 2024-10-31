public class ClearBit {
    public static void main(String args[])
    {
        int n=5; //0101
        int pos=2;
        int bitmask = 1<<pos; // 0100
        int notbitmask = ~bitmask; //1011
        int number = notbitmask & n; //0001
        System.out.println(number); // 1
    }
}
