#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s1 = "abc";
    reverse(s1.begin(),s1.end());
    cout<<s1<<endl;

    s1= "abcdef";
    // reverse(s1.begin()+1,s1.begin()+4);
    reverse(s1.begin()+1,s1.end()-2);
    cout<<s1<<endl;
}