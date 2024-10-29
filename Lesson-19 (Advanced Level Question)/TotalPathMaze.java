public class TotalPathMaze {
    public static int calculatePath(int i, int j, int n, int m) {
        //base case
        if(i==n || j==m)
        {
            return 0;
        }
        if(i==n-1 && j==m-1)
        {
            return 1;
        }
        // moving downwards
        int downwards = calculatePath(i + 1, j, n, m);
        // moving right
        int rightmovement = calculatePath(i, j + 1, n, m);

        return downwards+rightmovement;
    }

    public static void main(String args[]) {
        int n = 3, m = 3;
        int totalPath = calculatePath(0, 0, n, m);
        System.out.println(totalPath);

    }
}
