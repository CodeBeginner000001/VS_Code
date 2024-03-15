/*
Given an integer N, print Pascal Triangle upto N rows.


Input Format
Single integer N.


Constraints
N <= 10


Output Format
Print pascal triangle.


Sample Input
4
Sample Output
       1
     1   1
   1   2   1
 1   3   3   1

Explanation
Last row has one " "
*/

// Hint: c=c*(row-column+1)/column;    where c=1
#include <iostream>
using namespace std;
int main()
{
  int n, c;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    int j = 1;
    while (j < n - i)
    {
      cout << "  ";
      j++;
    }
    j = 0;
    while (j <= i)
    {
      if (j == 0 && i >= 0)
      {
        c = 1;
        cout << "1  ";
      }
      else
      {
        c = c * (i - j + 1) / j;
        cout << " " << c << "  ";
      }
      j++;
    }
    cout << endl;
  }
}