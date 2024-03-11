/*
Hamming Distance 
 
Given two 32-bit integers N and M, design an algorithm 
to find the Hamming Distance between them. The Hamming distance 
between two integers is the number of positions at which the 
corresponding bits are different. 
 
Example  
 
Input : N = 42 M = 36 
Output : 3 
 
 
   5th 4th 3rd 2nd 1st 0th 
N= 1   0   1   0   1   0 
M= 1   0   0   1   0   0 
*/

#include<iostream>
using namespace std;
int main()
{
    int n,m;
    int count = 0;
    cin >> n >> m;
    int resp = n ^ m;
    while (resp>0)
    {
        if((resp&1)==1)
        {
            count++;
        }
        resp >>= 1;
    }
    cout << count;
}