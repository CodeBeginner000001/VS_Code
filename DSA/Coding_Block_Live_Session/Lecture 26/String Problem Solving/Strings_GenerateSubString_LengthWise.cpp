#include<iostream>
#include<string>
using namespace std;

void GenerateSubstringLengthWise(const string s,int n)
{

    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=n-i;j++)
        {
            cout<<s.substr(j,i)<<" ";
        }
        cout<<endl;
    }
}


int main()
{
    // string s;
    // cout<<"Enter String: ";
    // getline(cin>>ws,s);
    string s = "abcde";
    int n = s.length();
    GenerateSubstringLengthWise(s,n);

}