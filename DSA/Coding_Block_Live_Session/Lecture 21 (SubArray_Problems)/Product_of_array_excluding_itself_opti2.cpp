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

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n;i++)
    {
        cin >> arr[i];
    }
    //time: O(n+n+n) = O(n)
    //space: O(n+n) = O(n)
    int answer[n];
    int l[n], r[n];

    l[0] = 1;
    for (int i = 1; i < n;i++)
    {
        l[i] = l[i - 1] * arr[i - 1];
    }

    // for (int i = 0; i < n; i++)
    // {
    //     cout << l[i] << " ";
    // }
    // cout << endl;

    r[n - 1] = 1;
    for (int i = n - 2; i >= 0;i--)
    {
        r[i] = r[i + 1] * arr[i + 1];
    }

    // for (int i = 0; i < n; i++)
    // {
    //     cout << r[i] << " ";
    // }
    // cout << endl;

    for (int i = 0; i < n; i++)
    {
        answer[i] = l[i] * r[i];
    }

    for (int i = 0; i < n;i++)
    {
        cout << answer[i] << " ";
    }
    cout << endl;

}