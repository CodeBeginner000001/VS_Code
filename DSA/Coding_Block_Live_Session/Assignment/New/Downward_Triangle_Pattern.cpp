/*
Write a program to print given pattern by taking input N.


Input Format
The first line contains an integer N.


Constraints
Output Format
Display the pattern as result.


Sample Input
6
Sample Output
* * * * * *
 * * * * *
  * * * *
   * * *
    * *
     *
*/
#include <iostream>
using namespace std;
int main()
{
     int k;
     int n;
     cin >> n;
     for (int i = 0; i <= n; i++)
     {
          int k = 0;
          while (k <= i)
          {
               cout << " ";
               k++;
          }
          int j = 5;
          while (j >= 0)
          {
               if (j - i >= 0)
               {
                    cout << "* ";
               }
               j--;
          }
          cout << endl;
     }
}