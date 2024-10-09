/*
Reverse in Range 
 
Given an array of N integers,  and two non-negative integers i and j where 0 <= i<j <= N-1 design an algorithm to reverse the subarray that starts at the ith index and ends at the jth index. 
 
Example  
 
Input  
i = 2,  j = 5 
0   1   2   3   4   5   6 
10  20  30  40  50  60  70 
 
Output  
0   1   2   3   4   5   6 
10  20  60  50  40  30  70 
*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i <=n-1;i++)
    {
        cin >> a[i];
    }
    int i;
    cin >> i;
    int j;
    cin >> j;
    if(i<n && j<n)
    {
      while(i<j)
      {
        swap(a[i],a[j]);
        i++;
        j--;
      }
      for (int i = 0; i <=n-1;i++)
      {
        cout << a[i]<<" ";
      }
    }
}