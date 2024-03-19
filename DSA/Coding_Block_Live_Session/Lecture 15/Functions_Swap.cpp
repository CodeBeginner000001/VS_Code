#include <iostream>
using namespace std;

void Myswap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 10;
    int b = 15;
    Myswap(a, b);
    cout << a << " " << b << endl;
}