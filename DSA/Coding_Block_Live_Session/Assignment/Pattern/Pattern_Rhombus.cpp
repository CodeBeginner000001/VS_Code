/*
Take N (number of rows), print the following pattern (for N = 3).

                         1
                       2 3 2
                     3 4 5 4 3
                       2 3 2
                         1

Input Format
Constraints
0 < N < 10


Output Format
Sample Input
3
Sample Output
    1
  2	3	2
3	4	5	4	3
  2	3	2
    1
Explanation
Each number is separated from other by a tab.
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
      if (i + j >= n - 1)
      {
        cout << 2 * i + j - (n - 2) << "  ";
      }
      else
      {
        cout << "   ";
      }
      j++;
    }
    j = 1;
    while (j < n)
    {
      if (i >= j)
      {
        cout << 2 * i - j + 1 << "  ";
      }
      j++;
    }
    cout << endl;
  }
  for (int i = 1; i < n; i++)
  {
    int j = 0;
    while (j < n)
    {
      if (i <= j)
      {
        cout << -2 * i + j + n << "  ";
      }
      else
      {
        cout << "   ";
      }
      j++;
    }
    j = 1;
    while (j < n)
    {
      if (i + j <= n - 1)
      {
        cout << -2 * i - j + (2 * n - 1) << "  ";
      }
      j++;
    }
    cout << endl;
  }
}