#include <iostream>
#include <string>
using namespace std;

// time Complexity: O(n^3)
bool goodString(string s)
{
    for (char ch : s)
    {
        if (!(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'))
            return false;
    }
    return true;
}

int longestGoodString(string str)
{
    int n = str.length();
    int count = 0;
    for (int i = 0; i < n; i++)
    {

        for (int j = i; j < n; j++)
        {
            string s = str.substr(i, j - i + 1);
            if (goodString(s))
            {
                count = max(count, j - i + 1);
            }
        }
    }
    return count;
}

int main()
{
    string str = "cbaeicdeiou";
    cout << longestGoodString(str) << endl;
}