/*Given a 32-bit non-negative integer N, design an algorithm to count the no. of its set bits. 
 
Example  
 
Input : N = 42 
Output : 3 
 
5th 4th 3rd 2nd 1st 0th 
1   0   1   0   1   0
*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count=0;
    while(n>0)
    {
        if((n&1)==1)
        {
            count++;
        }
        n>>=1;
    }
    cout<<count;
}