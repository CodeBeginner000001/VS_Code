public class CheckIfArrayIsSorted {
    public static boolean  CheckSorted(int arr[],int i)
    {

        if(i == arr.length-1)
        {
            return true;
        }

        if(arr[i] < arr[i+1])
        {
            return CheckSorted(arr, i+1);
        }else
        {
            return false;
        }
    }
    public static void main(String args[])
    {
        int arr[] = {1, 2, 3, 4, 5};
        System.out.println(CheckSorted(arr,0));
    }
}
