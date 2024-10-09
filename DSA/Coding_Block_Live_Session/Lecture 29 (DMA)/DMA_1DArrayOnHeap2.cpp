#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
     
    // allocate memory for a 1D array with custom size on the heap
    int *ptr = new int[n];

    // read values in the 1D array
    for(int i=0;i<n;i++)
    {
        cin>>ptr[i]; // cin>>*(ptr+i)
    }

    // print the value stored in the 1D array
    for(int i=0;i<n;i++)
    {
        cout<<ptr[i]<<" "; // cout<< *(ptr+i)<<" ";
    }

    // deallocate the memory of 1D array
    delete [] ptr;
}