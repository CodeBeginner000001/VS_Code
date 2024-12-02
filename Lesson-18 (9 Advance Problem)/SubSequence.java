/*
 * 
 *          Wanted to be included 
 *                             (a)               
                             /      \
                          (ab)      (a_)
                         /   \     /   \
                      (abc) (ab_) (a_c) (a__)
                     |      |      |     |
                    ""    "ab"   "ac"  "a"

 * Not wanted to be included
*                               (_)
                          /             \
                       (_b)            (__)
                      /   \           /   \
                   (_bc) (_b_)    (__c)  (___)
                    |     |         |     |
                   "bc"  "b"        "c"    ""
 */
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
        // to be not included
        subsequence(str, i+1, newStr);
    }
    public static void main(String args[])
    {
        String str = "abc";
        subsequence(str,0,"");
    }    
}
