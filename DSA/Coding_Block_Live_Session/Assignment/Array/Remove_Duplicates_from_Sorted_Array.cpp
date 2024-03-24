/*
Given a sorted array and you just need to remove the duplicates from the array


Input Format:
First line contains integer N as size of array.
Next line contains a N integer as element of array.


Constraints:
Length of the array is less than 150000
The array is in ascending order


Output Format:
The first line prints the new reduced length The second line prints t
he elements of the array till the new length


Sample Input:
3
1 1 2
Sample Output:
2
1 2

Explanation:
{ 1, 1, 2}
If there is an element that is already present in the array remove
the element. Here 1 occurs twice in the array therefore remove one
of them and return the reduced list with no duplicates.
The length is = 2 and the array is { 1, 2 }
*/
#include <iostream>
using namespace std;

// 2nd Approach
// time: O(n)
// space: O(1)
void remove_duplicate(int arr[], int n)
{
    int count = 0;
    int j = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] != arr[i + 1])
        {
            arr[j] = arr[i];
            count++;
            j++;
        }
    }
    arr[j] = arr[n - 1];
    cout << count + 1 << endl;
    for (int i = 0; i <= j; i++)
    {
        cout << arr[i] << " ";
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
    // 1st approach
    // time: O(n^2)
    // space: O(k)
    /* int arr2[] = {0};
     int k = 0;
     int count = 0;
     for (int i = 0; i < n; i++)
     {
         for (int j = i + 1; j < n; j++)
         {
             if (arr[i] == arr[j])
             {
                 arr[j] = INT_MIN;
                 count++;
             }
         }
     }
     cout << n - count << endl;
     for (int i = 0; i < n; i++)
     {
         if (arr[i] != INT_MIN)
             cout << arr[i] << " ";
     }
     */
    remove_duplicate(arr, n);
}