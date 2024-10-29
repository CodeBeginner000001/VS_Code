import java.util.ArrayList;

public class SubsetOfNnaturalNumber {
    public static void subsets(int n, ArrayList<Integer> subset)
    {
        // base case
        if(n==0)
        {
            for(int i=0;i<subset.size();i++)
            {
                System.out.print(subset.get(i)+ " ");
            }
            System.out.println();
            return;
        }

        // wants to get included
        subset.add(n);
        subsets(n-1, subset);
        
        // don't want to get included
        subset.remove(subset.size()-1);
        subsets(n-1, subset);
    }
    public static void main(String args[])
    {
        int n = 3;
        ArrayList<Integer> subset = new ArrayList<>();
        subsets(n,subset);
    }
}
