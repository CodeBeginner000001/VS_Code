public class AllPermutation {
    public static void permutation(String str,String permu)
    {
        // time complexity: O(n*n!)
        // base case
        if(str.length()==0)
        {
            System.out.println(permu);
            return;
        }
        // Recursive case
        for(int i =0;i<str.length();i++)
        {
            char current = str.charAt(i);
            String newstr = str.substring(0,i)+str.substring(i+1);
            permutation(newstr, permu+current);
        }
    }
    public static void main(String args[])
    {
        String str = "abc";
        permutation(str,"");
    }
}
