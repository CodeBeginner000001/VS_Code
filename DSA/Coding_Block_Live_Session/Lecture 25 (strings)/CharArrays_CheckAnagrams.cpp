#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

bool Anagrams(char* str1,char* str2)
{
    int n = strlen(str1);
    int m = strlen(str2);

    // 1. sort the strs
    sort(str1,str1+n);
    sort(str2,str2+m);

    // 2. start comparing the character from start
    return strcmp(str1,str2)==0?true:false;
}

int main()
{
    char str1[]="abacbac";
    char str2[]="aabbbcc";


    /*Uncomment for user define code*/
    // char str1[101];
    // char str2[101];
    // cout<<"Enter string1: ";
    // cin.getline(str1,101);
    // cout<<"Enter string2: ";
    // cin.getline(str2,101);
    Anagrams(str1,str2)?cout<<"True"<<endl:cout<<"False"<<endl;
}
