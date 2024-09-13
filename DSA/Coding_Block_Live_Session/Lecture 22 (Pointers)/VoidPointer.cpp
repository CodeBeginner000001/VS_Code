#include<iostream>
using namespace std;

void increment (void *ptr, int size){
    // ptr points to an integer
    if(size == sizeof(int)){
        int *pint = (int*)ptr;
        (*pint)++;
    } else if(size == sizeof(char)){
        char *pchar = (char*)ptr;
        (*pchar)++;
    }else if(size == sizeof(double)){
        double *pdouble = (double*)ptr;
        (*pdouble)++;
    }
}

int main()
{
    int x=0;
    char y='a';
    double z=3.14;
    increment(&x, sizeof(x));
    increment(&y, sizeof(y));
    increment(&z, sizeof(z));

    cout<< x <<"\n"<<y<<"\n"<<z<<endl;
}