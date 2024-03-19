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

int targetsumpair(int arr[], int n, int t)
{
    int count = 0;
    int s = 0;
    int e = n - 1;
    while (s < e)
    {
        int pairsum = arr[s] + arr[e];
        if (pairsum == t)
        {
            count++;
            s++;
            e--;
        }
        else if (pairsum > t)
        {
            e--;
        }
        else
        {
            s++;
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
    int t;
    cin >> t;
    cout << targetsumpair(arr, n, t);
}