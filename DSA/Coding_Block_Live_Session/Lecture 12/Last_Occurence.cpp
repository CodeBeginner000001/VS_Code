/*
Last Occurrence 
 
Given an array of N integers, and an integer T, design an 
algorithm to find the index of the last occurrence of T in 
the given array. 
 
note : output -1 if T is not present in the given array. 
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int i = 0;
    for (i = 0; i < n; i++)
        cin >> arr[i];
    int t;
    cin >> t;
    int c;
    for (i = n - 1; i >= 0; i--)
    {
        if (arr[i] == t)
        {
            cout << i;
            break;
        }
    }
    if (i == -1)
    {
        cout << "-1";
    }
}