#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1;
    cout<<"Enter a string: ";
    // cin>>s1;

    // getline(cin,s1);
    // getline(cin>>ws,s1);
    getline(cin>>ws,s1,'$'); //'$' is a delimiting character
    /*
    Output due to above line is :-

    Enter a string: fgrfg $ hfh
    You have Entered: fgrfg 
    */
    cout<<"You have Entered: "<<s1<<endl;

}