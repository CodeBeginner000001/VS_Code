/*
Merge Sorted Arrays

Given two sorted array consisting of N and M integers respectively,
design an algorithm to merge the two sorted array such that the
merged array is sorted.

Example

Input:

0  1  2  3  4
10 30 50 70 80

Output:

0  1  2
20 40 60

*/
#include <iostream>
using namespace std;
// time: O(n+m)
// space: O(n+m)
void merge_two_sorted(int arr1[], int arr2[], int n, int m)
{
    int k = 0;
    int i = 0;
    int j = 0;
    int arr3[n + m];
    while (i <= n - 1 && j <= m - 1)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k] = arr1[i];
            i++;
            k++;
        }
        else
        {
            arr3[k] = arr2[j];
            j++;
            k++;
        }
    }

    while (i <= n - 1)
    {
        arr3[k] = arr1[i];
        k++;
        i++;
    }

    while (j <= m - 1)
    {
        arr3[k] = arr2[j];
        k++;
        j++;
    }

    for (int i = 0; i <= n + m - 1; i++)
    {
        cout << arr3[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    int arr1[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }

    int m;
    cin >> m;
    int arr2[m];
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }

    merge_two_sorted(arr1, arr2, n, m);
}