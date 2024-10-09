/*
Maximum Product of a Triplet

Given an array of  N integers, design an algorithm
to find the maximum product of a triplet present
inside the given array.

Example

Input:
0  1 2  3  4
20 5 25 15 10

Output : 7500

Input:
0    1  2 3 4
-10 -20 1 2 3

Output : 600

*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int f1 = INT_MIN;
    int s1 = INT_MIN;
    int t1 = INT_MIN;
    int fs = INT_MAX;
    int ss = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > f1)
        {
            t1 = s1;
            s1 = f1;
            f1 = a[i];
        }
        else if (a[i] > s1)
        {
            t1 = s1;
            s1 = a[i];
        }
        else if (a[i] > t1)
        {
            t1 = a[i];
        }

        if (a[i] < fs)
        {
            ss = fs;
            fs = a[i];
        }
        else if (a[i] < ss)
        {
            ss = a[i];
        }
    }
    int p1 = f1 * s1 * t1;
    int p2 = f1 * fs * ss;
    cout << max(p1, p2) << endl;
}