/*
Rahul had a sorted array of numbers from which he had to f
ind a given number quickly. His friend by mistake rotated the array.
Now Rahul doesn't have time to sort the elements again. Help him to
quickly find the given number from the rotated array.

Hint - Think Binary Search!

Input Format:
The first line contains N - the size of the array. the next N lines contain the numbers of the array.
The next line contains the item to be searched.


Constraints:
Output Format
Output the index of number in the array to be searched.
Output -1 if the number is not found.


Sample Input:
5
4 5 1 2 3
2
Sample Output:
3

Explanation:
The given rotated array is [4, 5, 1, 2, 3].
The element to be searched is 2 whose index is 3.
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

    int t;
    cin >> t;
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == t)
        {
            cout << i << endl;
            flag = true;
            break;
        }
    }
    if (!flag)
        cout << "-1";
}