#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s1 = "Namasta";
    for (int i = 0; s1[i] != '\0'; i++)
        cout << s1[i] << " ";
    cout << endl;

    int n = s1.size(); // s1.length
    for (int i = 0; i < n; i++)
        cout << s1[i] << " ";
    cout << endl;

    for (int i = 0; i < s1.length(); i++) //s1.size()
        cout << s1[i] << " ";
    cout << endl;
}