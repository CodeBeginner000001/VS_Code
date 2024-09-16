#include<iostream>
using namespace std;

void f(){
    static int x= 5; //static variable are initialised only once
    cout<<x<<endl;
    x++;
}

int main()
{
    f();
    f();
    f();
}