#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

void FindReverseString(char *str)
{
    int n = strlen(str);
    int i = 0;
    int j = n - 1;
    // Two pointer approach
    while (i < j)
    {
        swap(str[i], str[j]);
        i++;
        j--;
    }
}

int main()
{
    char str[] = "hello";
    cout << "Original string: " << str << endl;
    // FindReverseString(str);  // Created function to reverse string
    // cout << "Converted String: " << str << endl;

    int n = strlen(str);
    // reverse(str,str+n); // reversing whole string
    // cout << "Converted String: " << str << endl;

    
    reverse(str+1,str+4); // reversing in a range
    cout << "Reversed in a range: " << str << endl;
}