#include<iostream>
#include<string>
using namespace std;

bool  CheckGoodString(string s)
{
    // for(int i=0;s[i]!='\0';i++)
    // {
    //     char ch = s[i];
    //     if(!(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')){
    //         return false;
    //     }
    // }

    for(char ch : s)
    {
        if(!(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')) return false;
    }
    return true;
}

int main()
{
    string s ="aeiou";
    CheckGoodString(s)?cout<<"True"<<endl:cout<<"False"<<endl;
}