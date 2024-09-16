#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

bool checkAnagram(char* s1,char* s2)
{
    // 1. create a frequency map array
    int freq1[26];
    memset(freq1,0,sizeof(freq1));

    int freq2[26];
    memset(freq2,0,sizeof(freq2));


    // 2. create a loop to get character number and store it the index of the freqmap array
    for(int i=0;i<strlen(s1);i++) freq1[s1[i]-'a']++;
    // for(int i=0;i<26;i++)cout<<freq1[i]<<" ";

    for(int i=0;i<strlen(s2);i++) freq2[s2[i]-'a']++;
    // for(int i=0;i<26;i++)cout<<freq2[i]<<" ";



    // 3. compare the two frequency map arrays
    for(int i=0;i<26;i++)
    {
        if(freq1[i]!=freq2[i]) return false;
    }
    return true;
}

int main()
{
    char s1[]="abacbac";
    char s2[]="aabbbcc";

    /*Uncomment for user define code*/
    // char str1[101];
    // char str2[101];
    // cout<<"Enter string1: ";
    // cin.getline(str1,101);
    // cout<<"Enter string2: ";
    // cin.getline(str2,101);

    checkAnagram(s1,s2)?cout<<"True":cout<<"False";
    cout<<endl;
}
