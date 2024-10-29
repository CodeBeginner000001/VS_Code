public class PlacingTilesInFloor {
    public static int CalculateWays(int n , int m)
    {
        // base case
        if(n==m)
        {
            return 2;
        }
        if(n<m){
            return 1;
        }
        // placing vertical
        int verticalPlace  = CalculateWays(n-m, m);
        // placing horizontal
        int horizontalPlace = CalculateWays(n-1, m);
        return verticalPlace+horizontalPlace;
    }
    public static void main(String args[])
    {
        int n = 4, m = 2;
        int totalWays = CalculateWays(n , m);
        System.out.println(totalWays);
    }
}
