#include <iostream>
using namespace std;
int main()
{
    int x = 10;

    int *xptr = &x; // pointer delcartion and assignment

    cout << "x = " << x << endl;
    cout << "sizeof(x) = " << sizeof(x) << "B" << endl;
    cout << "&x = " << &x << endl;
    cout << "sizeof(&x) = " << sizeof(&x) << "B" << endl;
    cout << "xptr = " << xptr << endl;
    cout << "sizeof(xptr) = " << sizeof(xptr) << "B" << endl;

    cout << endl;

    double y = 3.14;

    double *yptr = &y; // pointer delcartion and assignment

    cout << "y = " << y << endl;
    cout << "sizeof(y) = " << sizeof(y) << "B" << endl;
    cout << "&y = " << &y << endl;
    cout << "sizeof(&y) = " << sizeof(&y)<< "B" << endl;
    cout << "yptr = " << yptr << endl;
    cout << "sizeof(yptr) = " << sizeof(yptr) << "B" << endl;

    cout << endl;

    char ch = 'A';

    char *chptr = &ch; // pointer delcartion and assignment

    cout << "ch = " << ch << endl;
    cout << "sizeof(ch) = " << sizeof(ch) << "B" << endl;
    cout << "&ch = " << &ch << endl;
    cout << "sizeof(&ch) = " << sizeof(&ch) << "B" << endl;
    cout << "chptr = " << chptr << endl;
    cout << "sizeof(chptr) = " << sizeof(chptr) << "B" << endl;

    cout << endl;
}