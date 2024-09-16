#include <iostream>
using namespace std;
int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    cout << arr << endl;

    char str[] = {'a', 'b', 'c', 'd', 'e'};
    cout << str << endl;
    
    char str1[] = "wxyz";
    cout << str1  << endl;

    cout<<str1[0]<<" "<<str1[1]<<" "<<str1[2]<<" "<<str1[3]<<endl;
    str1[4] =='\0'?cout<<"Yes":cout<<"No";
    cout<<endl;

    for(int i=0;str1[i]!='\0';i++)
    {
        cout<<str1[i]<<" ";
    }
    cout<<endl;
}