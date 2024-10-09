/*
Generate Subsequences

Given a sequence of integers, design an algorithm to generate
all of its subsequences.

Note  :  We define a subsequence of a given sequence as a sequence
which can be obtained by deleting zero or more elements from the
given sequence such that the relative order between the sequence
elements doesn't change.

Example

Input:
0  1  2
10 20 30

Output:
{ }
{10},{20},{30},{10,20},{10,30},{20,30},{10,20,30}

*/
#include <iostream>
using namespace std;

void Generate_subseq(int arr[], int n)
{
    for (int num = 0; num < (1 << n); num++) // 2^n or num<=2^n-1
    {
        for (int k = 0; k < n; k++)
        {
            if (((num >> k) & 1) == 1)
            {
                cout << arr[k] << " ";
            }
        }
        cout << endl;
    }
    cout << endl;
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
    Generate_subseq(arr, n);
}