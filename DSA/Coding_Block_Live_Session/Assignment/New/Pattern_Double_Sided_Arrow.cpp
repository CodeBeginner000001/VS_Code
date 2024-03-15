/*
Take N as input. For a value of N=7, we wish to draw the following pattern :

                            1
                        2 1   1 2
                    3 2 1       1 2 3
                4 3 2 1           1 2 3 4
                    3 2 1       1 2 3
                        2 1   1 2
                            1

Input Format
Take N as input.


Constraints
N is odd number.


Output Format
Pattern should be printed with a space between every two values.


Sample Input
7
Sample Output
            1
        2 1   1 2
    3 2 1       1 2 3
4 3 2 1           1 2 3 4
    3 2 1       1 2 3
        2 1   1 2
            1
Explanation
Catch the pattern and print it accordingly.
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i <= n / 2; i++)
    {
        int j = 0;
        while (j < ((n - 1) - 2 * i))
        {
            cout << "  ";
            j++;
        }
        j = 0;
        while (j <= n / 2)
        {
            if (i + j >= n / 2)
            {
                cout << (n / 2 + 1) - j << " ";
            }
            else
            {
                cout << "  ";
            }
            j++;
        }
        j = 1;
        while (j <= i)
        {
            if (i <= j)
            {
                cout << j + 1;
            }
            // else
            // {
            //     cout << "  ";
            // }
            j++;
        }
        cout << endl;
    }
}