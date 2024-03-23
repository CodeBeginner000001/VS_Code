/*
Take as input N, the size of array.
Take N more inputs and store that in an array.
Take as input “target”, a number.
Write a function which prints all pairs of numbers which sum to target.


Input Format:
The first line contains input N. Next N lines contains
the elements of array and (N+1)th line contains target number.


Constraints:
Length of the arrays should be between 1 and 1000.


Output Format:
Print all the pairs of numbers which sum to target.
Print each pair in increasing order.


Sample Input:
5

1 3 4 2 5
5

Sample Output:
1 and 4
2 and 3

Explanation:
Find any pair of elements in the array which has sum equal to
target element and print them.
*/
#include <iostream>
using namespace std;
// 1st approach
// time: O(n^2)
// space: O(1)

void array_target(int arr[], int n, int t)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == t)
            {
                arr[i] > arr[j] ? cout << arr[j] << " and " << arr[i] << endl : cout << arr[i] << " and " << arr[j] << endl;
            }
        }
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
    int t;
    cin >> t;
    // sort(arr, arr + n);
    // with sort function : n^2+nlogn
    array_target(arr, n, t);
}