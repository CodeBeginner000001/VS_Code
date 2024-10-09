#include <iostream>
using namespace std;

bool iseven(int n)
{
    return n % 2 == 0;
}

int main()
{
    bool answer = iseven(4);
    cout << answer << endl;

    cout << iseven(5) << endl;

    if (iseven(6))
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }

    iseven(6) ? cout << "True" << endl : cout << "False" << endl;

    if (iseven(9))
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }

    iseven(9) ? cout << "True" << endl : cout << "False" << endl;
}