#include<iostream>
using namespace std;

void increment(int *ptr){
    (*ptr)++;
}

int main(){
    int a=0;
    cout<<"Inside main(), before increment() a = "<<a <<endl;
    increment(&a);
    cout<<"Inside main(), after increment() a = "<<a<<endl;
}