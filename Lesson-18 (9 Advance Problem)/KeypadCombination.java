public class KeypadCombination {
    public static String[] keypad = {".","abc","def","ghi","jkl","mno","pqrs","tu","vwx","yz"};
    public static void keypadcombination(String str , int i , String newStr)
    {
        // time complexity: O(4^n)

        // base case
        if(i == str.length())
        {
            System.out.println(newStr);
            return;
        }
        // recursive case
        String mapping = keypad[str.charAt(i) - '0'];
        for(int j =0 ; j<mapping.length();j++)
        {
            keypadcombination(str, i+1, newStr+mapping.charAt(j));
        }
    }
    public static void main(String args[])
    {
        String str = "23";
        keypadcombination(str,0,"");
    }
}
