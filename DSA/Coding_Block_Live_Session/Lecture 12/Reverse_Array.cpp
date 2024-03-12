/*
Reverse Array 
 
Given an array of N integers, design an algorithm to reverse it. 
 
Example  
 
Input  
0   1   2   3   4   5   6 
10  20  30  40  50  60  70 
 
Output  
0   1   2   3   4   5   6 
70  60  50  40  30  20  10 
*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n;i++)
    {
        cin >> a[i];
    }
    int i = 0;
    int j = n - 1;
    while(i<j)
    {
        swap(a[i], a[j]);
        i++;
        j--;
    }
     for (int i = 0; i < n;i++)
    {
        cout<< a[i] << " ";
    }
}