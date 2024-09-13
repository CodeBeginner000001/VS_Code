#include<iostream>
using namespace std;
int main()
{
    /*Adding one number in the address will add 4B in the address*/
    int x = 10;
    int *xptr = &x;
    cout<<"xptr = "<< xptr <<endl;
    xptr++;
    cout<<"xptr = "<< xptr <<endl;

    cout<<endl;

    /*Adding 3 in the address will add 12B in the address*/
    int y=20;
    int *yptr = &y;
    cout<<"yptr = "<< yptr <<endl;
    yptr+=3;
    cout<<"yptr = "<< yptr <<endl;

    cout<<endl;

     /*Adding 4 in the address will add 16B in the address*/
    int z=30;
    int *zptr = &z;
    cout<<"zptr = "<< zptr <<endl;
    zptr+=4;
    cout<<"zptr = "<< zptr <<endl;
}