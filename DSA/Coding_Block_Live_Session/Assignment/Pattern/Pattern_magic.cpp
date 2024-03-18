/*
You will be given a number N. You have to code a
hollow diamond looking pattern.

The output for N=5 is given in the following image.

Screen Shot 2016-06-09 at 2.47.18 pm.png


Input Format
The input has only one single integer N.


Constraints
Output Format
Output the given pattern.


Sample Input
5
Sample Output
*********
**** ****
***   ***
**     **
*       *
**     **
***   ***
**** ****
*********

Explanation
Write a code to print above given pattern.
No space between any two characters.
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int j = 0;
        while (j < n)
        {
            if (i + j <= n - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
            j++;
        }
        j = 1;
        while (j < n)
        {
            if (i <= j)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
            /* code */
            j++;
        }
        cout << endl;
    }
    for (int i = 1; i < n; i++)
    {
        int j = 0;
        while (j < n)
        {
            if (i >= j)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
            j++;
        }
        j = 1;
        while (j < n)
        {
            if (i + j >= n - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
            j++;
        }
        cout << endl;
    }
}