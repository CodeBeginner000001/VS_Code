/*
Rotate Array

Given an array of N integers, design an algorithm
to rotate the array once in the clockwise direction.

Example

Input
0  1  2  3  4  5  6
10 20 30 40 50 60 70

Output
0  1  2  3  4  5  6
70 10 20 30 40 50 60

*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n > 0)
    {
        int a[n];

        for (int i = 0; i <= n - 1; i++)
        {
            cin >> a[i];
        }
        int temp = a[n - 1];
        for (int i = n - 1; i >= 1; i--)
        {
            a[i] = a[i - 1];
        }
        a[0] = temp;
        for (int i = 0; i <= n - 1; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    else
    {
        cout << "0";
    }
}
