/*
Write a program to print given pattern by taking input N.


Input Format
The first line contains an integer N.


Constraints
Output Format
Display the pattern as result.


Sample Input
5
Sample Output
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n;i++)
    {
        int j = 0;
        while (j<=i)
        {
            if(i>=j)
            {
                cout << j + 1 << " ";
            }
            j++;
        }
        cout << endl;
    }
}
