/*
Generate Pairs

Given an array of N integers, design an algorithm to generate all of its pairs.

Example

Input
0  1  2  3  4
10 20 30 40 50

Output

( 10, 20 ), ( 10, 30 ), ( 10, 40 ), ( 10, 50 ),
( 20, 30 ), ( 20, 40 ), ( 20, 50 ),
( 30, 40 ), ( 30, 50 ),
( 40, 50 )
*/

#include <iostream>
using namespace std;

// time: O(n^2)
void generate_pair(int arr[], int n)
{
    for (int i = 0; i <= n - 2; i++)
    {
        int j;
        for (j = i + 1; j <= n - 2; j++)
        {
            cout << "(" << arr[i] << "," << arr[j] << "), ";
        }
        cout << "(" << arr[i] << "," << arr[j] << ")";
        cout << endl;
    }
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
    cout << endl;
    generate_pair(arr, n);
}