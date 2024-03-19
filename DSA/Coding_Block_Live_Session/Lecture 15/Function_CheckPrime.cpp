#include <iostream>
using namespace std;

bool isPrime(int n)
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

int main()
{
    int n;
    cin >> n;
    isPrime(n) ? cout << "prime" << endl : cout << "not a prime" << endl;
}