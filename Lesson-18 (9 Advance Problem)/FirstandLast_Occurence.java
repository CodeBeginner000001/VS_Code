public class FirstandLast_Occurence {
    public static int first_Index = -1;
    public static int last_Index = -1;
    public static void findOccurence(String str , char element, int i)
    {
        if(i == str.length())
        {
            System.out.println("First Occurence is at: "+first_Index+" and last index is at: "+last_Index);
            return;
        }
        if(str.charAt(i)==element)
        {
            if(first_Index==-1)
            {
                first_Index = i;
            }else
            {
                last_Index = i;
            }
        }
        findOccurence(str, element, i+1);
    }
    public static void main(String args[])
    {
        String str = "abaacdaefaah";
        findOccurence(str,'a',0);
    }
}
