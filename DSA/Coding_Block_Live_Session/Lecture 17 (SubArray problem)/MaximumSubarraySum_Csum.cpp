/*
Maximum Subarray Sum

Given an array of N integers, design an algorithm to find the maximum subarray sum.

Example

Input:

0  1  2  3  4  5  6  7  8
-2 1 -3  4 -1  2  1 -5  4

Output : 6
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

    int lsf = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = csum[j + 1] - csum[i];
            lsf = max(lsf, sum);
        }
    }
    cout << lsf << endl;
}