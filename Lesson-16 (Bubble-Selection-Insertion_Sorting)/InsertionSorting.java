public class InsertionSorting {
    public static void main(String args[]) {
        // time complexity: O(n^2)
        int[] arr = { 30, 10, 40, 20, 50 };
        int n = arr.length;
        for (int i = 1; i < n; i++) {
            int current = arr[i];
            int j = i - 1;
            while (j >= 0 && current < arr[j]) {
                arr[j + 1] = arr[j];
                j--;
            }
            // placement
            arr[j + 1] = current;
        }
        for (int i = 0; i < n; i++)
            System.out.print(arr[i] + " ");
    }
}
