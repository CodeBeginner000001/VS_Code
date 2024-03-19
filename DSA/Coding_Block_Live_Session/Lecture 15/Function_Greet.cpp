#include <iostream>
using namespace std;

void greet()
{
    cout << "Hello World" << endl;
    return;
}
int main()
{
    cout << "inside main() : before greet()" << endl;
    greet();
    cout << "inside main() : After greet()" << endl;
}