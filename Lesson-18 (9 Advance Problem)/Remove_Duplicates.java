public class Remove_Duplicates {
    public static boolean[] fmap = new boolean[26];
    public static void removeDuplicates(String str , int i, String newStr)
    // time complexity: O(n)
    {
        // base case
        if(i==str.length())
        {
            System.out.println(newStr);
            return;
        }
        // calculation and recursive call
        if(fmap[str.charAt(i)-'a'])
        {
            removeDuplicates(str, i+1, newStr);
        }else{
            fmap[str.charAt(i)-'a']=true;
            newStr+=str.charAt(i);
            removeDuplicates(str, i+1, newStr);
        }
    }
    public static void main(String args[])
    {
        String str = "abbccdda";
        removeDuplicates(str,0,"");
    }
}
