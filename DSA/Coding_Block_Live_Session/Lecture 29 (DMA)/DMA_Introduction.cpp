#include <iostream>
using namespace std;
int main()
{
    int *ptr = new int; // Allocation
    *ptr = 500;
    cout << *ptr << endl;
    delete ptr; // to avoid memory leak & Deallocation

    ptr = new int; // Allocation
    *ptr = 1000;
    cout << *ptr << endl;
    delete ptr; // to avoid memory leak & Deallocation
}