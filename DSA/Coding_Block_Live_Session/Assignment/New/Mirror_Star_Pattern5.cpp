/*
Take N (number of rows - only odd numbers allowed), print the following pattern (for N = 5).

      *
   *  *  *
*  *  *  *  *
   *  *  *
      *

Input Format
Constraints
0 < N < 10 (only odd numbers allowed)


Output Format
Sample Input
5
Sample Output
      *
    * * *
  * * * * *
    * * *
      *
Explanation
Each '*' is separated from other by a tab.
*/
#include <iostream>
using namespace std;
int main()
{
  int n;
  cin >> n;
  for (int i = 0; i < n / 2 + 1; i++)
  {
    int j = 0;
    while (j < n / 2 + 1)
    {
      if (i + j > n / 2 - 1)
      {
        cout << "*"
             << "  ";
      }
      else
      {
        cout << "   ";
      }
      j++;
    }
    j = 1;
    while (j < n / 2 + 1)
    {
      if (i >= j)
      {
        cout << "*"
             << "  ";
      }
      else
      {
        cout << "   ";
      }
      j++;
    }
    cout << endl;
  }
  for (int i = 0; i <= n / 2 - 1; i++)
  {
    int j = 0;
    while (j < n / 2 + 1)
    {
      if (i < j)
      {
        cout << "*"
             << "  ";
      }
      else
      {
        cout << "   ";
      }
      j++;
    }
    j = 1;
    while (j < n / 2)
    {
      if (i + j < n / 2)
      {
        cout << "*"
             << "  ";
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