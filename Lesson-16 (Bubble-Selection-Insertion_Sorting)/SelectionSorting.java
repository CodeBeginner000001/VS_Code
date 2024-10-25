public class SelectionSorting{
    public static void main(String args[])
    {
        // time complexity : O(n^2)
        int arr[] = {30,40,10,50,20};
        for(int i=0;i<arr.length-1;i++)
        {
            int smallest = i;
            for(int j=i+1;j<arr.length;j++)
            {
                if(arr[smallest]>arr[j])
                {
                    smallest = j;
                }
            }
            int temp = arr[smallest];
            arr[smallest] = arr[i];
            arr[i] = temp;
        }

        for(int i=0;i<arr.length;i++) System.out.print(arr[i]+" ");
    }
}