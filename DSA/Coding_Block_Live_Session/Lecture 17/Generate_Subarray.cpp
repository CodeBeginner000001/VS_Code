/*
Generate Sub-Arrays

Given an array of N integers, design an algorithm to generate all of its sub-arrays.

Note : We define a sub-array of an array as a contiguous part of the given array.

Example

Input
0  1  2  3  4
10 20 30 40 50

*/
#include <iostream>
using namespace std;

void generating_subarray(int arr[], int n)
{
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = i; j <= n - 1; j++)
        {
            cout << "{";
            for (int k = i; k <= j - 1; k++)
            {
                cout << arr[k] << ",";
            }
            cout << arr[j] << "}";
            cout << endl;
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << endl;
    generating_subarray(arr, n);
}