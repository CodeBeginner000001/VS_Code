/*
Product of Array Except Self

Given an integer array nums, return an array answer such that answer[i] 
is equal to the product of all the elements of nums except nums[i].

The product of any prefix or suffix of nums is guaranteed to fit in a 
32-bit integer.

Example :

Input:
0 1 2 3 4
1 2 3 4 5

Output:
0   1  2  3  4
120 60 40 30 24

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

    int answer[n];

    // time: O(n^2)
    for (int i = 0; i < n; i++)
    {
        int li = 1;
        for (int j = 0; j <= i - 1; j++)
        {
            li *= arr[j];
        }

        int ri = 1;
        for (int j = i + 1; j <= n - 1; j++)
        {
            ri *= arr[j];
        }

        answer[i] = li * ri;
    }

    for (int i = 0; i < n; i++)
    {
        cout << answer[i] << " ";
    }
    cout << endl;
}