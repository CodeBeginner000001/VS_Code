public class GetBit {
    public static void main(String args[])
    {
        int n = 5; //0101
        int pos = 3;
        int bitmask = 1<<pos; // 0100
        if((bitmask & n)==0)
        {
            System.out.println("The bit is 0");
        }else{
            System.out.println("The bit is 1");
        }
    }
}
