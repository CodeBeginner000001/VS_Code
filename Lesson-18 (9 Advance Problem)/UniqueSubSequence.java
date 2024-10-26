
import java.util.HashSet;

public class UniqueSubSequence {
    public static void uniqueSubsequence(String str ,int i,String newStr,HashSet<String> set)
    {
        // base Case
        if(i==str.length())
        {
            if(set.contains(newStr))
            {
                return;
            }
                set.add(newStr);
                System.out.println(newStr);
                return;
        }
        // Recursive Case
        // to be included
        uniqueSubsequence(str, i+1, newStr+str.charAt(i),set);
        // to be excluded
        uniqueSubsequence(str, i+1, newStr,set);
    }
    public static void main(String args[])
    {
        // String str = "abc";
        String str = "aaa";
        HashSet<String> set = new HashSet<>();
        uniqueSubsequence(str,0,"",set);
    }
}
