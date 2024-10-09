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
        k = k % n;
        int i = 0;
        int j = n - 1;

        while (i < j)
        {
            swap(a[i], a[j]);
            i++;
            j--;
        }
        i = 0;
        j = k - 1;
        while (i < j)
        {
            swap(a[i], a[j]);
            i++;
            j--;
        }
        i = k;
        j = n - 1;
        while (i < j)
        {
            swap(a[i], a[j]);
            i++;
            j--;
        }
        for (i = 0; i < n; i++)
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