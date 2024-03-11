/*
Clear Last K Bits 
 
Given a non-negative integers N, design an algorithm clear its last K bits. 
 
Example  
 
Input : N = 169, K = 4 
Output : 160 

N=169, K=4 
 
 
       7th 6th 5th 4th 3rd 2nd 1st 0th 
i/p =  1   0   1   0   1   0   0   1 

o/p =  1   0   1   0   0   0   0   0  

*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int k;
    cin >> k;
    int mask = ~1 << k;
    cout << (n & mask)<<endl;
}