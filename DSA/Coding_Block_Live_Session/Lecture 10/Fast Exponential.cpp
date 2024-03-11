/*
Fast Exponentiation 
 
Given two integers A and N,  compute AN in ~ log2N steps. 
 
Example  
 
Input : A = 4 N = 5 
Output : 1024 
*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a;
    cin >> a;
    int r = 1;
    int pow = a;
    while (n > 0)
    {
        if((n&1)==1)
        {
            r *= pow;
        }
        pow *= pow;
        n >>= 1;
    }
    cout << r;
}