/*
Merge Sorted Arrays in O(1) Space

Given a sorted array  "A" of size N+M consisting of N integers
& another sorted array "B" consisting of M integers, design an
algorithm to merge the two sorted array such that the merged
array is also sorted without using any extra space.

Example

Input:
0  1  2  3  4  5  6
10 30 50 70

0  1  2
20 40 60

Output:
0  1  2  3  4  5  6
10 20 30 40 50 60 70

*/
#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n + m];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int arr2[m];
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }
    // time: O(n+m)
    // space: O(1)
    int i = n - 1;
    int j = m - 1;
    int k = m + n - 1;
    while (i >= 0 && j >= 0)
    {
        if (arr[i] > arr2[j])
        {
            arr[k] = arr[i];
            k--;
            i--;
        }
        else
        {
            arr[k] = arr2[j];
            k--;
            j--;
        }
    }
    while (i >= 0)
    {
        arr[k] = arr[i];
        k--;
        i--;
    }
    while (j >= 0)
    {
        arr[k] = arr2[j];
        k--;
        j--;
    }

    for (int i = 0; i < n + m; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
