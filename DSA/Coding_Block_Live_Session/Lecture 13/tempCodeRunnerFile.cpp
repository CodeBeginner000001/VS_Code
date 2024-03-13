/*
Three Largest Elements

Given an array of  N  integers, design an algorithm
to find the three largest elements present inside
the given array

Example

Input
0  1  2   3  4   5
20 5  0  25  15  10

Output
15 20 25

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
    }
    cout << t1 << " " << s1 << " " << f1;
    cout << endl;
}