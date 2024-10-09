/*
Selection Sort

Given an array of  N integers, sort the array using
the selection sort algorithm.

Example

Input
0  1  2  3  4
50 40 10 30 20

Output
0  1  2  3  4
10 20 30 40 50

The selection sort algorithm works in passes
such that in its each pass, we place the
smallest  element in the un-sorted part of the array
to its correct position.
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

    for (int i = 0; i < n; i++)
    {
        int min_index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }
        swap(arr[min_index], arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
