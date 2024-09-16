#include<iostream>
#include<cstring>  // using inbuilt fucntion made for character
using namespace std;
int findCount(const char* str)
{
    int count=0;
    for(int i=0;str[i]!='\0';i++) {
        // cout<<str[i]<<endl;
        count++;
    }
    return count;
}
int main()
{
    char str[]="Coding";
    cout<<findCount(str)<<endl;
    
    // strlen is used to find length of the string 
    cout<<strlen(str)<<endl;
}