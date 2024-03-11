/*
Power of 2 
 
Given a non-negative integer N, design an algorithm to check if it is a power of 2. 
 
Example  
 
Input : N = 8 
Output : True 
 
Input : N = 10 
Output : False 
*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int mask=n-1;
    if(n<=0)
    {
        cout<<"False"<<endl;
    }
    if(n>0)
    {
        if((n & mask)==0) 
    {
        cout<<"True"<<endl;
    }
    else
    {
        cout<<"False"<<endl;
    }
}
}