/*
Take N (number of rows), print the following pattern (for N = 4).

                       1           1
                       1 2       2 1
                       1 2 3   3 2 1
                       1 2 3 4 3 2 1

Input Format
Constraints
0 < N < 10


Output Format
Sample Input
4
Sample Output
1						1
1	2				2	1
1	2	3		3	2	1
1	2	3	4	3	2	1
*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int j = 0;
        while(j<n)
        {
            if(i>=j)
            {
                cout << j+1 << "  ";
            }
            else
            {
                cout << "   ";
            }
            j++;
        }
        j = 1;
        while(j<n)
        {
            if(i+j>=n-1)
            {
                cout << n-j << "  ";
            }
            else
            {
                cout << "   ";
            }
            j++;
        }
        cout << endl;
    }
}