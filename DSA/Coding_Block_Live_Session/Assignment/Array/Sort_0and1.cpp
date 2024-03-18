/*
Take as input N, a number. Take N more inputs to form an array.
The array contains only 0 and 1. Sort the array in a single scan.


Input Format:
Enter the size of the array N and input N more numbers and store in the array


Constraints:
Output Format:
Display the sorted array


Sample Input:
5
1
1
1
0
0
Sample Output:
0 0 1 1 1
*/
#include <iostream>
using namespace std;
int main()
{
    int m;
    cin >> m;
    int a[m];
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    sort(a, a + m);
    for (int i = 0; i < m; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}