#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the amount of string you want to enter: "<<endl;
    cin>>n;

    cin.ignore(); // ignore the enter when press so that getline line doesn't count it

    char inp[101];
    cin.getline(inp,101);

    char lsf[101];
    strcpy(lsf,inp);

    for(int i=1;i<n;i++)
    {
        cin.getline(inp,101);
        if(strcmp(inp,lsf)>0) strcpy(lsf,inp);
    }
    cout<<endl;
    cout<<lsf<<endl;
    
}