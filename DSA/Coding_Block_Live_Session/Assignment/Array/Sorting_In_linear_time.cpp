/*
Given an array having n elements representing balls of various colours
like red, white or blue, sort them in-place so that balls of the same
colour are adjacent, with the colours in the order red, white and blue.
To represent the colour red, white, and blue we will use the
integers 0, 1, and 2 respectively.
Note:You are not suppose to use the sort function for this problem.


Input Format:
First line contains integer n as size of array. Next n lines contains a single integer as element of array.


Constraints:
None


Output Format:
Print the balls in order so that balls of same colour are adjacent.


Sample Input:
6
2 0 2 1 1 0

Sample Output:
0 0 1 1 2 2
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int arr1[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int count1 = 0;
    // time: n+n+n
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            arr1[count1] = arr[i];
            count1++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            arr1[count1] = arr[i];
            count1++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 2)
        {
            arr1[count1] = arr[i];
            count1++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr1[i] << " ";
    }
}