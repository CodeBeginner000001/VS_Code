/*
Counting Sort

Given an array of N non-negative integers,  design an algorithm to
sort the array such that each array element is <= a given integer K.


The counting sort algorithm works in two steps: -

-> we count and store the occurrences of each element in the given array.

-> we compute the starting index of every unique element in the output.

Example:
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
int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    int freq_map[k];
    int out[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    memset(freq_map, 0, sizeof(freq_map));

    for (int i = 0; i < n; i++)
    {
        int x;
        x = arr[i];
        freq_map[x]++;
    }

    for (int i = 1; i <= k; i++)
    {
        freq_map[i] += freq_map[i - 1];
    }

    for (int i = k; i >= 1; i--)
    {
        freq_map[i] = freq_map[i - 1];
    }
    freq_map[0] = 0;

    for (int i = 0; i < n; i++)
    {
        int x = arr[i];
        int pos = freq_map[x];
        out[pos] = x;
        freq_map[x]++;
    }

    for (int i = 0; i < n; i++)
    {
        cout << out[i] << " ";
    }
    cout << endl;
}