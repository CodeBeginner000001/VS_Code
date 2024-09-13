#include <iostream>
using namespace std;

void greet()
{
    cout << "namaste" << endl;
}

int add(int a, int b)
{
    return a + b;
}

bool ascending(int a, int b)
{
    return a > b; // return true if a>b otherwise return false
}

int main()
{
    // cout << (void *)main << endl; // gives the same output as &main
    // cout << (void *)&greet << endl;
    // cout << (void *)&add << endl;
    // cout << (void *)&ascending << endl;
    // cout << (void *)greet << endl;
    // cout << (void *)add <<endl;
    // cout << (void *)ascending << endl;

    void (*gptr)() = greet;
    int (*addptr)(int, int) = add;
    bool (*ascptr)(int, int) = ascending;

    (*gptr)(); // dereferncing explicitly
    gptr();    // dereferencing implicitly
    greet();

    cout << endl;

    cout << (*addptr)(2, 3) << endl;
    cout << addptr(2, 3) << endl;
    cout << add(2, 3) << endl;

    cout << endl;

    cout << (*ascptr)(2, 3) << endl;
    cout << ascptr(2, 3) << endl;
    cout << ascending(2, 3) << endl;
}