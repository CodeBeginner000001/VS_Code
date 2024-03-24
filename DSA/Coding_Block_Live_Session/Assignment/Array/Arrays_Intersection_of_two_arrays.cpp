/*
Take as input N, the size of array.
Take N more inputs and store that in an array.
Take N more inputs and store that in another array.
Write a function which gives the intersection of two arrays
in an ArrayList of integers and Print the ArrayList.


Input Format:
First line contains N denoting the size of the two arrays.
Second line contains N space separated integers denoting
the elements of the first array. Third line contains N space
separated integers denoting the elements of the second array.


Constraints:
Length of Arrays should be between 1 to 100000.


Output Format:
Display the repeating elements in a comma separated
manner enclosed in square brackets. The numbers
should be sorted in increasing order.


Sample Input:
7
1 2 3 1 2 4 1
2 1 3 1 5 2 2

Sample Output:
[1, 1, 2, 2, 3]

Explanation:
Check which integer is present in both
the arrays and add them in an array .
Print this array as the ans.
*/

#include <iostream>
#include <algorithm>
using namespace std;

// 1st approach
// time: O(n^2+nlog(n))
// space: O(k)
/* void inter(int arr1[], int arr2[], int arr3[], int n)
{
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr1[i] == arr2[j])
            {
                arr3[k] = arr1[i];
                arr2[j] = 0;
                k++;
                break;
            }
        }
    }
    sort(arr3, arr3 + k);
    cout << "[";
    for (int i = 0; i < k - 1; i++)
    {
        cout << arr3[i] << ", ";
    }
    cout << arr3[k - 1] << "]" << endl;
}
*/

// 2nd approach
// time:O( nlog(n)+nlog(n)+n+n ~ nlog(n)+n )
// space: O(k)

/*
void inter(int arr1[], int arr2[], int arr3[], int n)
{
    int k = 0;
    sort(arr1, arr1 + n);
    sort(arr2, arr2 + n);
    int i = 0;
    int j = 0;
    while (i < n & j < n)
    {
        if (arr1[i] == arr2[j])
        {
            arr3[k] = arr1[i];
            k++;
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    cout << "[";
    for (int i = 0; i < k - 1; i++)
    {
        cout << arr3[i] << ", ";
    }
    cout << arr3[k - 1] << "]" << endl;
}
*/

// time: nlogn+n ~ nlog(n)
// space: O(1)
void inter(int arr1[], int arr2[], int n)
{
    cout << "[";
    sort(arr1, arr1 + n);
    sort(arr2, arr2 + n);
    int i = 0;
    int j = 0;
    int ans = -1;
    while (i < n && j < n)
    {
        if (arr1[i] == arr2[j])
        {
            if (ans == -1)
            {
                cout << arr1[i];
                i++;
                j++;
            }
            else
            {
                cout << ", " << arr1[i];
                i++;
                j++;
            }
            ans = 2;
        }
        else if (arr1[i] < arr2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    cout << "]";
}

int main()
{
    int n;
    cin >> n;
    int arr1[n];
    int arr2[n];
    int arr3[] = {};
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }
    // inter(arr1, arr2, arr3, n);
    inter(arr1, arr2, n);
}