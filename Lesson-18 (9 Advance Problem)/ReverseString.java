public class ReverseString {
    public static void reverseString(String str,int i , String newString)
    {
        if(i<0)
        {
            System.out.println(newString);
            return;
        }
        newString+=str.charAt(i);
        reverseString(str, i-1, newString);

    }
    public static void main(String[] args) {
        String str = "hello";
        reverseString(str,str.length()-1,"");
    }
}
