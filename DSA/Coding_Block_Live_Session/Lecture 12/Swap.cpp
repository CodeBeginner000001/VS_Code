#include<iostream>
using namespace std;
int main()
{
    int a = 10;
    int b = 20;
    swap(a, b);
    cout << a << " " << b << endl;

    a = (a + b) - (b = a);
    cout << a << " " << b << endl;

    int temp = a;
    a = b;
    b = temp;
    cout << a << " " << b << endl;
}