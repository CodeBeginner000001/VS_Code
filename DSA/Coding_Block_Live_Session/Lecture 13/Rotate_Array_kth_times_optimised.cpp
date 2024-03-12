/*
K-Rotate Array

Given an array of N integers, and a positive integer K design
an algorithm to K-rotate the array in the clockwise direction.

Example:-

Input: N=7 , K=3
0  1  2  3  4  5  6
10 20 30 40 50 60 70

Output:
0  1  2  3  4  5  6
50 60 70 10 20 30 40

*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int k;
    cin >> k;
    if (n > 0)
    {
        int a[n];

        for (int i = 0; i <= n - 1; i++)
        {
            cin >> a[i];
        }
        for (int j = 0; j < (k % n); j++)
        {
            int temp = a[n - 1];
            for (int i = n - 1; i >= 1; i--)
            {
                a[i] = a[i - 1];
            }
            a[0] = temp;
        }
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
