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
    int ans[n];
    int product=1;
    int i = 0;

    // time: O(n+n+n) ~ O(3n) ~O(n)
    while (i < n){
        product *= arr[i];
        i++;
    }

    i = 0;
    while(i<n)
    {
        ans[i] = product / arr[i];
        i++;
    }

    i = 0;
    while(i<n)
    {
        cout << ans[i]<<" ";
        i++;
    }
    
    cout << endl;
}