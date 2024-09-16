#include<iostream>
#include<cstring>
using namespace std;

void copyString(char* s1,char* s2)
{
    int i=0;
    while(s2[i]!='\0')
    {
        s1[i]=s2[i];
        i++;
    }
    s1[i]='\0';
}

int main()
{
    char s1[]="abdsf chg";
    char s2[]="wxyz kvhvk";
    cout<<"Before copy: "<<s1<<endl;
    // copyString(s1,s2);
    strcpy(s1,s2);
    cout<<"After  copy: "<<s1<<endl;
}