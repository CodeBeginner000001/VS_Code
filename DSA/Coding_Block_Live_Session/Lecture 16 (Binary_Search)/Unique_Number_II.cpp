/*
Unique Number II

Given a sequence of 2N+2 non-negative numbers where each number is
present twice except for two numbers which are present only once.
You've to design an algorithm to find the two unique numbers without
using any extra space.

Example

Input:
1 1 2 2 3 4 4 5 5 6 6 7

Output : 3, 7
*/
#include <iostream>
using namespace std;

void unique_Numbers(int arr[], int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }
    int pos = 0;
    while ((ans & 1) == 0)
    {
        pos++;
        ans >>= 1;
    }
    int mask = 1 << pos;
    int firstsetA = 0;
    int secondsetB = 0;
    for (int i = 0; i < n; i++)
    {
        if ((arr[i] & mask) == 0)
        {
            firstsetA ^= arr[i];
        }
        else
        {
            secondsetB ^= arr[i];
        }
    }
    cout << firstsetA << "," << secondsetB << endl;
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
    unique_Numbers(arr, n);
}