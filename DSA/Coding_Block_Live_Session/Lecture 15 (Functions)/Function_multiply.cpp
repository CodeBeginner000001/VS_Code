#include <iostream>
using namespace std;

int multi(int a, int b)
{
    return a * b;
}

int main()
{
    cout << multi(2, 3) << endl;
    int answer = multi(4, 5);
    cout << answer << endl;

    int a = 6;
    int b = 9;
    cout << multi(a, b) << endl;

    int c = 3;
    int g = 7;
    cout << multi(c, g) << endl;
}