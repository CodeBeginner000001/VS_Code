public class InvitePeopleInWays {
    public static int inviteWays(int n)
    {
        // base case
        if(n <= 1)
        {
            return 1;
        }
        // Single
        int single = inviteWays(n-1);

        // pair
        int pair = (n-1)*inviteWays(n-2);

        return single+pair;
    }
    public static void main(String args[])
    {
        int n = 3;
        int result = inviteWays(n);
        System.out.println(result);
    }
}
