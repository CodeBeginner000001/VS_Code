#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

bool comparator(char a , char b)
{
    if(a>b) return true;
    return false;
}
int main()
{
    string s = "xabcyz";
    sort(s.begin(),s.end());
    cout<< s<<endl;

    /* use of greater<data type> will change the behaviour of sorting function from increasing to decreasing order.*/
    greater<char>obj; // obj is a variable of type greater<char> or obj is an object of the greater<char> class
    // obj is a functor i.e., a function object
    
    // sort(s.begin(),s.end(),obj); /*this will help in manipulating sorting behaviour from increasing to decreasing order*/
    sort(s.begin(),s.end(),comparator);
    cout<<s<<endl;
}