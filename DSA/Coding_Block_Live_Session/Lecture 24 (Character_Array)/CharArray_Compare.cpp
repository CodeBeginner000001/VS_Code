#include<iostream>
#include<cstring>
using namespace std;

int CompareString(const char* str1,const char* str2)
{
    int i=0;
    int j=0;
    while(str1[i]!='\0' and str2[j]!='\0')
    {
        if(str1[i]>str2[j]) return 1;
        else if(str1[i]<str2[j]) return -1;
        i++;
        j++;
    }
    if(str1[i]!='\0') return -1;
    else if(str2[j]!='\0') return 1;
    return 0;
}

int main()
{
    char str1[]="abc";
    char str2[]="adc";

    // int ans = CompareString(str1,str2);
    int ans = strcmp(str1,str2);

    // cout<<str1-str2<<endl; //string count

    if(ans==0) cout<<"s1 is equal to s2";
    else if(ans>0) cout<<"s1 is greater than s2";
    else if(ans<0) cout<<"s1 is smaller than s2";
    cout<<endl;
}