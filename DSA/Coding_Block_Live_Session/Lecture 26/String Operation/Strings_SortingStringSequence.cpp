#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

bool comparator (string a , string b)

{
    // return true if you want a to be ordered before b otherwise false
    if(a<b) return true;
    // if a is lexicographically greater than b and you want to sort the sequence in lexicographically decreasing order
    return false;
}

bool lengthCompare(string a,string b)
{
    if(a.length()<b.length()) return true; /*a<b will sort in increasing order whereas a>b will solve in decreasing order*/
    return false;
}

int main()
{
    string arr[]=  {"vwxyz","abc","g","hijk"};
    int n=4;
    // sort(arr,arr+n); /*Increasing Order*/
    // sort(arr,arr+n,greater<string>()); /*Decreasing Order*/
    // sort(arr,arr+n,comparator); 
    sort(arr,arr+n,lengthCompare);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<endl;
    
}