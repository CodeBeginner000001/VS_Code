class Merge_Sort{
    // time complexity = O(nlogn)
    public static void conquer(int arr[],int si,int mid,int e)
    {
        // n
        int[] merged = new int[e-si+1];
        int idx1 = si;
        int idx2 = mid+1;
        int x = 0;
        while(idx1<= mid && idx2<= e)
        {
            if(arr[idx1] <= arr[idx2])
            {
                merged[x++]=arr[idx1++];
            }
            else{
                merged[x++] = arr[idx2++];
            }
        }
        while(idx1<=mid){
            merged[x++] = arr[idx1++];
        }
        while(idx2<=e)
        {
            merged[x++] = arr[idx2++];
        }
        for(int i=0,j=si;i<merged.length;i++,j++)
        {
            arr[j]=merged[i];
        }
    }
    public static void divide(int arr[],int si,int e)
    {
        //O(logn)
        if(si>=e)
        {
            return;
        }
        int mid = si+(e-si)/2;
        divide(arr, si, mid);
        divide(arr, mid+1, e);
        conquer(arr,si,mid,e);
    }
    public static void main(String args[])
    {
        int arr[] = {6,3,9,5,2,8};
        int n = arr.length;
        divide(arr, 0, n-1);

        for(int i=0;i<n;i++){
            System.out.print(arr[i]+" ");
        }
    }
}