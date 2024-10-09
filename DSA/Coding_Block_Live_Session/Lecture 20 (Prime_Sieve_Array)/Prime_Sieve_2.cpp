/*
Prime Sieve ( Sieve of Eratosthenes )

Given a integer M, generate all the prime numbers in the range [2, M].

Example

M = 20
2 3 5 7 11 13 17 19

*/
#include <iostream>
using namespace std;
int main()
{
    int m;
    cin >> m;
    int arr[m];

    for (int i = 0; i <= m; i++)
    {
        arr[i] = 1;
    }
    arr[0] = 0;
    arr[1] = 0;

    for (int i = 2; i <= m; i++)
    {
        if (arr[i] == 1)
        {
            for (int j = i * i; j <= m; j += i)
            {
                arr[j] = 0;
            }
        }
    }

    for (int i = 2; i <= m; i++)
    {
        if (arr[i] == 1)
        {
            cout << i << " ";
        }
    }
}