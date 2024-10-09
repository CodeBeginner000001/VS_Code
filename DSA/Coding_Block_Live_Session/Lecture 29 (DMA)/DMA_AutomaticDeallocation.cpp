#include <iostream>
using namespace std;
// int *f1()
// {
//     int x = 10;
//     return &x;
// }

int *f2(){  // Heap allocation
    int *xptr = new int ;
    *xptr = 10;
    return xptr;
}

int main()
{ 
    // int *xptr = f1();  // Dangling Pointer Problem
    // cout << *xptr << endl;

    int *xptr1 = f2();
    cout << xptr1 <<endl;
}