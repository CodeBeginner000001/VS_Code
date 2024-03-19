/*
Maximum Subarray Sum using Kadane's Algorithm

Given an array of N integers, design an algorithm to find the maximum subarray sum.

Example

Input:

 0 1  2 3  4
-3 2 -1 4 -5

Output : 5
*/
#include <iostream>
using namespace std;

int kadanes(int arr[], int n)
{
    int x;
    x = arr[0];
    int maxsofar = x;
    for (int i = 1; i < n; i++)
    {
        x = max(x + arr[i], arr[i]);
        maxsofar = max(maxsofar, x);
    }
    return maxsofar;
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

    cout << kadanes(arr, n) << endl;
    ;
}