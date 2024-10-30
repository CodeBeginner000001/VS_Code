public class PermutationOfString{
    public static void permutation(String str , String permu)
    {

        // time complexity : O(n*n!)
        // base case
        if(str.length()==0)
        {
            System.out.println(permu);
            return;
        }
        // Recursive call and calculation 
        for(int i =0;i<str.length();i++)
        {
            char current = str.charAt(i);
            String newStr =  str.substring(0,i)+str.substring(i+1);
            permutation(newStr,permu+current);
        }
    }
    public static void main(String args[])
    {
        String str = "abc";
        permutation(str,"");
    }
}