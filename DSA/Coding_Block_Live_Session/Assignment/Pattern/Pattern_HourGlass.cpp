/*
Take N as input. For a value of N=5, we wish to draw the following pattern :

                          5 4 3 2 1 0 1 2 3 4 5
                            4 3 2 1 0 1 2 3 4
                              3 2 1 0 1 2 3
                                2 1 0 1 2
                                  1 0 1
                                    0
                                  1 0 1
                                2 1 0 1 2
                              3 2 1 0 1 2 3
                            4 3 2 1 0 1 2 3 4
                          5 4 3 2 1 0 1 2 3 4 5

Input Format
Take N as input.


Constraints
N <= 20


Output Format
Pattern should be printed with a space between every two values.


Sample Input
5
Sample Output
 5 4 3 2 1 0 1 2 3 4 5
   4 3 2 1 0 1 2 3 4
     3 2 1 0 1 2 3
       2 1 0 1 2
         1 0 1
           0
         1 0 1
       2 1 0 1 2
     3 2 1 0 1 2 3
   4 3 2 1 0 1 2 3 4
 5 4 3 2 1 0 1 2 3 4 5
*/
#include <iostream>
using namespace std;
int main()
{
  int n;
  cin >> n;
  for (int i = 0; i <= n; i++)
  {
    int j = 0;
    while (j <= n)
    {
      if (i <= j)
      {
        cout << n - j << " ";
      }
      else
      {
        cout << "  ";
      }
      j++;
    }
    j = 1;
    while (j <= n)
    {
      if (i + j <= n)
      {
        cout << j << " ";
      }
      else
      {
        cout << "  ";
      }
      j++;
    }
    cout << endl;
  }
  for (int i = 1; i <= n; i++)
  {
    int j = 0;
    while (j <= n)
    {
      if (i + j > n - 1)
      {
        cout << n - j << " ";
      }
      else
      {
        cout << "  ";
      }
      j++;
    }
    j = 1;
    while (j <= n)
    {
      if (i >= j)
      {
        cout << j << " ";
      }
      else
      {
        cout << "  ";
      }
      j++;
    }
    cout << endl;
  }
}