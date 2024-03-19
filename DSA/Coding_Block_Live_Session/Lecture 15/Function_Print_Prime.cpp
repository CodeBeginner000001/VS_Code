#include <iostream>
using namespace std;

bool isprime(int n)
{
    int sr = sqrt(n);
    for (int i = 2; i <= sr; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

void printPrime(int m)
{
    for (int n = 2; n <= m; n++)
    {
        if (isprime(n))
        {
            cout << n << " ";
        }
    }
    cout << endl;
}

int main()
{
    int m;
    cin >> m;
    printPrime(m);
}