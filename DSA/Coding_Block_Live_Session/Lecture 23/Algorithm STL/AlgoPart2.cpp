#include<iostream>

bool comparator(int a,int b)
{
    return a<b; // return true if you want a to be ordered before b in the sorted arr[] otherwise false (i.e., increasing order)
}

using namespace std;
int main(){
    int arr[]= {50,40,40,30,30,30,20,10,10};
    int n= sizeof(arr)/sizeof(int);
    // sorting a sequence in the decreasing order
    // sort (begin ,end ,comparator) //comparator can be function pointer or it can be function object or a functor
    sort(arr,arr+n,comparator); // &comparator
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    cout<<endl;
    // descending order
    // greater<int> funObj;
    // sort(arr,arr+n,funObj);

    sort(arr,arr+n,greater<int>());
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    cout<<endl;
}