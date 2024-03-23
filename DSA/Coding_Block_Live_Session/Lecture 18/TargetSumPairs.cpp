/*
Target Sum Pairs

Given a sorted array containing N distinct integers, and a target integer T,
design an algorithm to count the number of pairs of integers in the given
array whose sum is equal to T.

Example

Input:

N = 6, T = 60
0  1  2  3  4  5
10 20 30 40 50 60

Output : 2
*/

#include <iostream>
using namespace std;
// time: O(n^2)
// space: O(1)
int targetSumPair(int arr[], int n, int T)
{
    int count = 0;
    for (int i = 0; i <= n - 2; i++)
    {
        for (int j = i + 1; j <= n - 1; j++)
        {
            int pair = arr[i] + arr[j];
            if (pair == T)
                count++;
        }
    }
    return count;
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
    int T;
    cin >> T;
    cout << targetSumPair(arr, n, T) << endl;
}
