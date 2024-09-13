#include<iostream>
using namespace std;
int main(){
    // null pointers are equal
    int* p = NULL;
    int* q = nullptr;
    int* r = 0;

    if(p ==q and p==r){
        cout<<"They are eqaul";
    }

    // you connot dereference a null pointers
    // cout<<*p<<endl; //error
}