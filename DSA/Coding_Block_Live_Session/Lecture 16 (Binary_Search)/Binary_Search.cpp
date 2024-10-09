/*
Binary Search

Given a sorted array of N integers & an integer T, implement the binary search algorithm to find the index of T in the given array.

note : output -1 if T is not present in the given array.

Example

Input
N = 7 ; T = 20
0  1  2  3  4  5  6
10 20 30 40 50 60 70

Output : 1
*/
#include <iostream>
using namespace std;

int binary_Search(int arr[], int n, int t)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        //  int m=(s+e)/2;  // int overflow hona ka chance hai
        int m = s + (e - s) / 2; // int ko overflow nhi hona dana ka tarika
        if (arr[m] == t)
        {
            return m;
        }
        else if (t > arr[m])
        {
            s = m + 1;
        }
        else
        {
            e = m - 1;
        }
    }
    return -1;
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
    cout << binary_Search(arr, n, t) << endl;
}