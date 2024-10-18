#include <iostream>
using namespace std;
int main()
{
    // allocate memory for a 1D array on the heap memory
    int *ptr = new int[5];
    /* assign values to the array */
   /* 
   // *ptr = 10;
    // *(ptr + 1) = 20;
    // *(ptr + 2) = 30;
    // *(ptr + 3) = 40;
    // *(ptr + 4) = 50;
    */

    ptr[0] = 10;
    ptr[1] = 20;
    ptr[2] = 30;
    ptr[3] = 40;
    ptr[4] = 50;

    /* Print values of the allocated memory */
    // cout << *ptr << endl;
    // cout << *(ptr + 1) << endl;
    // cout << *(ptr + 2) << endl;
    // cout << *(ptr + 3) << endl;
    // cout << *(ptr + 4) << endl;

    // cout << ptr[0] << endl;
    // cout << ptr[1] << endl;
    // cout << ptr[2] << endl;
    // cout << ptr[3] << endl;
    // cout << ptr[4] << endl;

    for(int i=0;i<5;i++)
    {
        cout<<*(ptr+i)<<" "<<ptr[i]<<endl;
    }

    // deallocate the memory of 1D array
    delete [] ptr;
}