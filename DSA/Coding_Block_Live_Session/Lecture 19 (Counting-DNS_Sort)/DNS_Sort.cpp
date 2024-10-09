/*
DNF (Dutch National Flag) Sort

Given an array containing 0s, 1s & 2s design an algorithm to sort
the array.

Example

Input:

N = 9
0 1 2 3 4 5 6 7 8
1 0 1 2 0 1 2 0 1

Output:
0 1 2 3 4 5 6 7 8
0 0 0 1 1 1 1 2 2

*/
#include <iostream>
using namespace std;

// time: o(n)
// space: o(1)
void DNS_Sort(int arr[], int n)
{
    int low = -1;
    int mid = 0;
    int high = n;
    while (mid < high)
    {
        if (arr[mid] == 0)
        { // put arr[mid] value in zero region
            low++;
            swap(arr[low], arr[mid]);
            mid++;
        }
        else if (arr[mid] == 1)
        { // put arr[mid] value in one region
            mid++;
        }
        else
        {
            // put arr[mid] value in two's region
            high--;
            swap(arr[mid], arr[high]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
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

    DNS_Sort(arr, n);
}