#include <iostream>
using namespace std;

void f(int a)
{
    cout << "inside f() before ++ a= " << a << endl;
    a++;
    cout << "inside f() after ++ a = " << a << endl;
}
int main()
{
    int a = 10;
    cout << "Inside main() before f() a= " << a << endl;
    f(a);
    cout << "Inside main() after f() a= " << a << endl;
}