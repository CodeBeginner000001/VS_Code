/*
All Occurrences 
 
Given an array of N integers, and an integer T, design an algorithm to find the indices of all occurrence of T in the given array. 
 
note : output -1 if T is not present in the given array. 
 
Example  
 
Input : N = 5 ; T = 20 
0   1   2   3   4 
10  20  30  10  20 
Output : 1, 4 

*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int t;
    cin >> t;
    int i = 0;
    bool j = false;
    while (i <= n - 1)
    {
        if(a[i]==t)
        {
            cout << i <<" ";
            j = true;
        }
        i++;
    }
    if(!j)
    {
        cout << "-1";
    }
}