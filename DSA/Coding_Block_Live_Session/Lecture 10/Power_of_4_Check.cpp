/*
Power of 4 
 
Given a 32-bit non-negative integer N, design an algorithm to check if it is a power of 4. 
 
Example  
 
Input : N = 16 
Output : True 
 
Input : N = 8 
Output : False 
*/
#include<iostream>
using namespace std;
int main()
{
    int n; 
    cin>>n;
    int mask1 = 0xAAAAAAAA;
    int mask2 = n-1;
    if(n<=0)
    {
        cout<<"False"<<endl;
    }
        if(n>0)
    {
    if(((n&mask2)==0) && ((n&mask1)==0))
    {
        cout<<"True"<<endl;
    }
    else 
    {
        cout<<"False"<<endl;
    }
    }
}