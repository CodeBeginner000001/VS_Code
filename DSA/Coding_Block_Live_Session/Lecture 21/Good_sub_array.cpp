/*
Good Sub-Arrays

Given an array of N integers, design an algorithm to count
the number of good subarrays.  We define a good subarray as
a subarray whose sum of elements is divisible by N.

Example :

Input:
0 1 2 3 4 5
1 6 5 2 4 3

Output:
4
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int csum[n + 1];
    csum[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        csum[i] = csum[i - 1] + arr[i - 1];
    }

    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sij = csum[j + 1] - csum[i];

            if (sij % n == 0)
            {
                cnt++;
            }
        }
    }

    // time: O(n^2)
    // space: O(n)
    cout << cnt << endl;
}