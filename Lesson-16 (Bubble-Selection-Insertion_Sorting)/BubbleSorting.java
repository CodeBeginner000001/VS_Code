public class BubbleSorting {
    public static void main(String args[])
    {
        // time complexity: O(n^2)
        int arr [] = {1,5,8,3,2,1,5,9,2};
        int n = arr.length-1;
        for(int i = 0;i < n;i++)
        {
            for(int j=0; j<n-i;j++)
            {
                if(arr[j]>arr[j+1])
                {
                    //swap
                    int temp = arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }
        for(int i = 0;i < arr.length;i++) System.out.print(arr[i]+" ");
        System.out.println();
    }
}
