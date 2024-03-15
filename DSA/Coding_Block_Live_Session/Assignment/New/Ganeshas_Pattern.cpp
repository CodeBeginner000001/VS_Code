/*
Take as input N, an odd number (>=5) .
Print the following pattern as given below for N = 7.

*  ****
*  *
*  *
*******
   *  *
   *  *
****  *

Input Format
Enter value of N ( >=5 )


Constraints
5 <= N <= 99


Output Format
Print the required pattern.


Sample Input
7
Sample Output
*  ****
*  *
*  *
*******
   *  *
   *  *
****  *
Explanation
Catch the pattern for the corresponding
input and print it accordingly.
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
      while (j <= n / 2)
      {
         if ((i >= 0 && j == 0) || (j >= 0 && i == n / 2) || (i >= 0 && j == n / 2))
         {
            cout << "* ";
         }
         else
         {
            cout << "  ";
         }
         j++;
      }
      j = 1;
      while (j <= n / 2)
      {
         if (j >= 1 && (i == 0 || i == n / 2))
         {
            cout << "* ";
         }
         else
         {
            cout << "  ";
         }
         j++;
      }
      cout << endl;
   }
   for (int i = 1; i <= n / 2; i++)
   {
      int j = 0;
      while (j <= n / 2)
      {
         if ((i <= n / 2 && j == n / 2) || (i == n / 2))
         {
            cout << "* ";
         }
         else
         {
            cout << "  ";
         }
         j++;
      }
      j = 1;
      while (j <= n / 2)
      {
         if (j == n / 2)
         {
            cout << "* ";
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