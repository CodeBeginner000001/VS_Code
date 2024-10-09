/*
Counting Sort(Unstable Approach)

Unstable Approach: Because the order is not maintained of the element

Given an array of N non-negative integers,design an algorithm to
sort the array such that each array element is <= a given integer K.

Example

Input:

N = 9, K = 3
0 1 2 3 4 5 6 7 8
1 0 3 2 3 1 2 0 2

Output:
0 1 2 3 4 5 6 7 8
0 0 1 1 2 2 2 3 3

*/
#include <iostream>
using namespace std;

// time: n+n ~ O(n)
// space: k+1 ~ O(k)
void Count_sort(int arr[], int freq_count[], int n, int k)
{
    for (int i = 0; i < n; i++)
    {
        freq_count[arr[i]]++;
        // int x;
        // x = arr[i];
        // freq_count[x]++;
    }

    for (int i = 0; i <= k; i++)
    {
        int y = freq_count[i];
        for (int j = 1; j <= y; j++)
        {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    int k;
    cin >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int freq_count[k];
    memset(freq_count, 0, sizeof(freq_count));
    Count_sort(arr, freq_count, n, k);
}