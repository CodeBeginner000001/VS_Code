/*
Longest Run of 1s in Binary 
 
Given a integer N,  find the length of the 
longest consecutive run of 1s in its binary representation. 
 
Example  
 
Input : N = 247 
Output : 4 
 
 
   7th 6th 5th 4th 3rd 2nd 1st 0th 
N= 1   1   1   1   0   1   1   1 
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int count = 0;
    int maxcount = 0;
    while(n>0)
    {
        if((n&1)==1)
        {
            count+=1;
            if(count>maxcount){

                maxcount = count;
            }
        }
        else
        {
            count = 0;
        }
        n >>= 1;
    }
    cout << maxcount;
}