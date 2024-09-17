#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s = "abcdef";
    string substring = s.substr(2);
    cout << substring << endl;

    substring = s.substr(2, 3); // so the last number will display the output till n+1 indexes
    cout << substring << endl;

    substring = s.substr(1, 10);
    cout << substring << endl;
}