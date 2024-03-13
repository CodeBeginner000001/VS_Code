/*
Bubble Sort

Given an array of  N integers, sort the array using
the bubble sort algorithm.

Example

Input
0  1  2  3  4
50 40 30 20 10

Output
0  1  2  3  4
10 20 30 40 50

The bubble sort algorithm works in passes such that
in its each pass, we place the  largest  element in
the un-sorted part of the array to its correct position.
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
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
