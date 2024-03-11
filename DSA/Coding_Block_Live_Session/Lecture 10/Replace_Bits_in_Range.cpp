/*
Replace Bits in Range 
 
Given two 32-bit integers N and M, design an algorithm 
replace all the bits of N from position i to j with bits of M.  
 
note : assume minimum bits required to represent M = j - i + 1 
 
Example  
 
Input : N = 169, M = 10, i = 3, j = 6  
Output : 209 

N = 169, M = 10, i=3, j=6 
 
 
      7th 6th 5th 4th 3rd 2nd 1st 0th 
N =   1   0   1   0   1   0   0   1 
M =                   1   0   1   0 
          1   0   1   0 
o/p = 1   1   0   1   0   0   0   1 
*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int m;
    cin >> m;
    int i, j;
    cin >> i >> j;
    int m1 = -1 << (j + 1);
    int m2 = (1 << i) - 1;
    int mask = m1 | m2;
    n = n & mask;
    cout << (n | (m << i)) << endl;
}