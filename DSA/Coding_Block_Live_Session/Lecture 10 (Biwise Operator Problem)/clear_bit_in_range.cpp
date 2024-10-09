/* 
Clear Bits in Range 
 
Given a non-negative integer N, design an algorithm clear 
its bits from position i to j. 
 
Example  
 
Input : N = 169, i = 2, j = 5  
Output : 129 

N=169, i=2, j=5 
     7th 6th 5th 4th 3rd 2nd 1st 0th 
i/p= 1   0   1   0   1   0   0   1 

o/p= 1   0   0   0   0   0   0   1 
*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int start_range;
    cin >> start_range;
    int end_range;
    cin >> end_range;
    int m1 = ~1 << (end_range + 1);
    int m2 = (1 << start_range) - 1;
    int mask = m1 | m2;
    cout << (n & mask) << endl;
}