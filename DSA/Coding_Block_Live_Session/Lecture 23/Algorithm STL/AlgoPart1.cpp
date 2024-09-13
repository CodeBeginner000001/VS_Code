#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int arr[]= {50,40,40,30,30,30,20,10,10};
    int n = sizeof(arr)/sizeof(int);
    //  1. sorting a sequence using built-in sort() in O(logn) // introsort used
    sort(arr,arr+n); //sort(begin(),end())
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    cout<<endl;
    // 2. reversing a sequene using the built-in reverse()
    reverse(arr,arr+n);
    for(int i=0;i<n;i++)  cout<<arr[i]<<" ";
    cout<<endl;
    // 3. reverse in range (2,6)
    reverse(arr+2,arr+6);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    cout<<endl;
}