#include <iostream>
using namespace std;

void f(int &y)
{
    cout << "Inside f() before ++ y= " << y << endl;
    y++;
    cout << "Inside f() after ++ y= " << y << endl;
}

int main()
{
    int a = 10;
    cout << "Inside main() before f() a= " << a << endl;
    f(a);
    cout << "Inside main() after f() a= " << a << endl;
}