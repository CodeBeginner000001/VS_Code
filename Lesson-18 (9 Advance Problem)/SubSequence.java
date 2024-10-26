public class SubSequence {
    public static void subsequence(String str, int i , String newStr)
    {
        // time complexity ; O(2^n)
        // base case
        if(i==str.length())
        {
            System.out.println(newStr);
            return;
        }
        // recursive case
        // to be included 
        subsequence(str, i+1, newStr+str.charAt(i));
        // to be excluded
        subsequence(str, i+1, newStr);
    }
    public static void main(String args[])
    {
        String str = "abc";
        subsequence(str,0,"");
    }    
}
