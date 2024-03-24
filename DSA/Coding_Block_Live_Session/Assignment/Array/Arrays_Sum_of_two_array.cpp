/*
Take as input N, the size of array.
Take N more inputs and store that in an array.
Take as input M, the size of second array and take M more inputs
and store that in second array. Write a function that returns the
sum of two arrays. Print the value returned.


Input Format:
Constraints:
Length of Array should be between 1 and 1000.


Output Format:
Sample Input:
4
1 0 2 9
5
3 4 5 6 7

Sample Output:
3, 5, 5, 9, 6, END

Explanation:
Sum of [1, 0, 2, 9] and [3, 4, 5, 6, 7] is [3, 5, 5, 9, 6]
and the first digit represents carry over , if any (0 here ).
*/

#include <iostream>
using namespace std;

// time: O(n+n) ~ 2n ~ n
// space: O(n+1) ~ n
void sum_of_array(int arr[], int arr2[], int n, int m)
{
    int new_size = (m > n ? m : n) + 1;
    int arr3[new_size];
    int i = n - 1;
    int j = m - 1;
    int carry = 0;
    int arr_starting_index = 0;
    while (i >= 0 && j >= 0)
    {
        int sum = arr[i] + arr2[j] + carry;
        arr3[arr_starting_index] = sum % 10;
        carry = sum / 10;
        arr_starting_index++;
        i--;
        j--;
    }
    while (i >= 0)
    {
        int sum = arr[i] + carry;
        arr3[arr_starting_index] = sum % 10;
        carry = sum / 10;
        arr_starting_index++;
        i--;
    }
    while (j >= 0)
    {
        int sum = arr2[j] + carry;
        arr3[arr_starting_index] = sum % 10;
        carry = sum / 10;
        arr_starting_index++;
        j--;
    }
    if (carry != 0)
    {
        arr3[arr_starting_index] = carry;
        arr_starting_index++;
    }
    for (i = arr_starting_index - 1; i >= 0; i--)
    {
        cout << arr3[i] << ", ";
    }
    cout << "END";
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int m;
    cin >> m;
    int arr2[m];
    for (int j = 0; j < m; j++)
        cin >> arr2[j];

    sum_of_array(arr, arr2, n, m);
}