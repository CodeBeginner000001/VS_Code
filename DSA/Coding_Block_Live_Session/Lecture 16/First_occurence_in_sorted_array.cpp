/*
First Occurrence in Sorted Array

Given a sorted array of N integers, & an integer T,
design an algorithm to find the index of the 1st occurrence
of T in the given array. You've to output -1 if T isn't
present in the array.

Example

Input : N = 8 ; T = 30
0  1  2  3  4  5  6  7
10 20 30 30 30 30 40 50

Output : 2
*/
#include <iostream>
using namespace std;

int Binary_search(int arr[], int n, int t)
{
    int j;
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        int m = s + (e - s) / 2;
        if (arr[m] == t)
        {
            j = m;
            e = m - 1;
        }
        else if (t < arr[m])
        {
            e = m - 1;
        }
        else
        {
            s = m + 1;
        }
    }
    return j;
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
    int t;
    cin >> t;
    cout << Binary_search(arr, n, t) << endl;
}