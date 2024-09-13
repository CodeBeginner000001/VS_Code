#include <iostream>
using namespace std;
int main()
{
    int x = 10;
    int *xptr = &x;
    cout << "x = " << x << endl;
    cout << "&x = " << &x << endl;
    cout << "sizeof(x) = " << sizeof(x) << "B" << endl;
    cout << "xptr = " << xptr << endl;
    cout << "sizeof(xptr) = " << sizeof(xptr) << "B" << endl;
    cout << "*xptr = " << *xptr << endl;

    cout<<endl;

    int y = 20;
    int *yptr = &y;
    cout << "y = " << y << endl;
    cout << "&y = " << &y << endl;
    cout << "sizeof(y) = " << sizeof(y) << "B" << endl;
    cout << "yptr = " << yptr << endl;
    cout << "sizeof(yptr) = " << sizeof(yptr) << "B" << endl;
    cout << "*yptr = " << *yptr << endl;

    cout<<endl;

    cout<< x+y<<endl;
    cout<< (*xptr)+(*yptr)<<endl;

    cout<<endl;

 /* the output of the below code is -1, an the reason is all bits in the sizeof(char) i.e., 1B is set to one and the Left most bit which is set to 1
    is treated as signed value (if the left most bit will be 0 then it's positive) and in the negative sign world -1 is the highest of all numbers as all
    bits are set to 1 and the left most bit is 1 which is treated as negative in the bit indexes from (0-7)
 */
    int z = 255;
    char* zptr = (char*)&z;
    cout<<(int)*zptr;


}