/*
Maximum Circular Subarray Sum

Given an array of N integers, design an algorithm to find the maximum circular subarray sum.

Example

Input:
0   1  2 3 4 5
-1 -2 -3 1 2 3
Output : 6

Input:
0 1  2  3 4 5
1 2 -3 -4 5 6
Output : 14

*/
#include <iostream>
using namespace std;

int maximum_subarray_sum(int arr[], int n)
{
    int x = arr[0];
    int maxsofar = x;
    for (int i = 1; i < n; i++)
    {
        x = max(x + arr[i], arr[i]);
        maxsofar = max(maxsofar, x);
    }
    return maxsofar;
}

int minimum_subarray_sum(int arr[], int n)
{
    int x = arr[0];
    int maxsofar = x;
    for (int i = 1; i < n; i++)
    {
        x = min(x + arr[i], arr[i]);
        maxsofar = min(maxsofar, x);
    }
    return maxsofar;
}

int Total_sum_array(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int maximum_Circular_subarraySum(int arr[], int n)
{
    int total = Total_sum_array(arr, n);
    int minSum = minimum_subarray_sum(arr, n);
    int maxSum = maximum_subarray_sum(arr, n);
    return total == minSum ? maxSum : total - minSum;
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

    cout << maximum_Circular_subarraySum(arr, n) << endl;
}