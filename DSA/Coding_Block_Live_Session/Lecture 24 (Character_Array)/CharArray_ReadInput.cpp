#include<iostream>
using namespace std;

void readString(char* str,char dlim='\n'){
    char ch;
    int i=0;
    while(true){
        ch=cin.get();
        // cout<<i<<endl;
        if(ch==dlim)break;
        str[i++]=ch;
    }
    str[i]='\0';
}

int main()
{
    char str[101];
    cout<<"Enter String: ";
    // cin>>str; // this add '\0' automatically in the end of the string which cause it to terminate. and if entered a string with space 
    
    // readString(str,'$');
    // readString(str);
    // cout<<"You Entered: "<<str; // it will print the string before the whitespace

    // cin.getline(str,101,'$');
    // cin.getline(str,101);
    cin.getline(str,5,'$');
    cout<<"You Entered: "<<str; // it will print the string before the whitespace
}
