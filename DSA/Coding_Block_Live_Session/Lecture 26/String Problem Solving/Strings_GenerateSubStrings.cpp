#include<iostream>
#include<string>
using namespace std;

void GenerateSubString(const string s,int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<=n;j++)
        {
            cout<<s.substr(i,j-i)<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    string s;
    cout<<"Enter String: ";
    getline(cin,s);
    int n = s.length();
    GenerateSubString(s,n);
    
}
