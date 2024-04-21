/*
Good Sub-Arrays

Given an array of N integers, design an algorithm to count
the number of good subarrays.  We define a good subarray as
a subarray whose sum of elements is divisible by N.

Example :

Input:
0 1 2 3 4 5
1 6 5 2 4 3

Output:
4
*/
#include<iostream> 
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
    int freq[n];
    memset(freq, 0, sizeof(freq));
    int csum = 0;
    freq[0] = 1;
    for (int i = 0; i < n; i++)
    {
        csum += arr[i];
        freq[((csum % n) + n) % n]++;
    }

    // for (int i = 0; i < n;i++)
    // {
    //     cout << freq[i]<<" ";
    // }

    int cnt = 0;
    for (int i = 0; i < n;i++)
    {
        int xi = freq[i];
        if(xi>=2)
        {
            cnt += (xi * (xi - 1)) / 2;
        }
    }
    cout << cnt << endl;
}