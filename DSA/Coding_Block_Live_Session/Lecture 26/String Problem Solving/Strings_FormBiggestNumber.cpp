#include<iostream>
#include<string>
using namespace std;
//  the code follows lexicographical order
bool comparator(int a , int b){
    string sa = to_string(a);
    string sb = to_string(b);

    /*Below will work for some case but not for all*/
    // if(sa>sb){
    //     return true;
    // }
    // return false;
    // return sa>sb;

    if(sa+sb>sb+sa)
    { // a should be ordered before b
        return true;
    }
    return false;
    // return (sa+sb)>(sb+sa);
}



int main()
{
    int arr[]={98,9,78,7};
    // int arr[]={54,546,548,60};
    int n = sizeof(arr)/sizeof(int);

    sort(arr,arr+n,comparator);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    cout<<endl;
}