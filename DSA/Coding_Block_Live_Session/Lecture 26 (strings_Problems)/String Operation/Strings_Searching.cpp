#include<iostream>
using namespace std;
#include<string>
int main()
{
    string s1 = "bcdabcdabc";
    string substring = "abc";
    cout<<s1.find(substring)<<endl;
    cout<<s1.rfind(substring)<<endl;

    substring = "xyz";
    cout<<s1.find(substring)<<endl;
    cout<<string::npos<<endl;

    substring = "abc";
    if(s1.find(substring)!=string::npos){
        cout<<"1st occurence of "<<substring<<" in "<<s1<<" is at index "<<s1.find(substring)<<endl;
    }else{
        cout<<substring<<" is not found "<<endl;
    }
}
    
