#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s1 = "new";
    string s2 = "delhi";

    s1.append(s2);
    cout << s1 << endl;
    cout << s2 << endl;

    cout << endl;
    s1 = "New";
    s2 = "Delhi";
    s1 += s2;
    cout << s1 << endl;
    cout << s2 << endl;

    cout << endl;
    s1 = "New";
    s2 = "Delhi";
    string s3 = s1 + s2;
    cout << s3 << endl;
    cout << s1 << endl;
    cout << s2 << endl;

    cout<<endl;
    s1 = "abc";
    s1.push_back('d');
    cout << s1 << endl;
    cout << s1.length() << endl;


    cout<<endl;
    s1.pop_back();
    cout<<s1<<endl;
    cout<<s1.length()<<endl;


    cout<<s1[0]<<" "<<s1.front()<<endl;
    cout<<s1[0]<<" "<<s1.back()<<endl;

    cout<< s1[s1.length()-1]<<" "<<s1.back()<<endl;
}