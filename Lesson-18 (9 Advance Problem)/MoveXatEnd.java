public class MoveXatEnd {
    public static void xatend(String str, int i, String newStr,int count)
    {
        if(i==str.length())
        {
            for(int j=0;j<count;j++)
            {
                newStr+='x';
            }
            System.out.println(newStr);
            return;
        }
        if(str.charAt(i)!='x')
        {
            newStr += str.charAt(i);
            xatend(str,i+1,newStr,count);
        }else
        {
            count++;
            xatend(str,i+1,newStr,count);
        }
    }
    public static void main(String args[])
    {
        String str = "axbcxxd";
        xatend(str,0,"",0);
    }
}
