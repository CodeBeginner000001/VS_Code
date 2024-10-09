#include <iostream>
using namespace std;

void iseven(int n)
{
    if (n % 2 == 0)
    {
        cout << n << " is even" << endl;
    }
    else
    {
        cout << n << " is not even" << endl;
    }
}

int main()
{
    iseven(4);
    iseven(5);
}
