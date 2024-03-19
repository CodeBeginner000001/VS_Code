#include <iostream>
#include <cmath>
using namespace std;

float areaofTri(int b, int h)
{
    return 0.5 * b * h;
}

float computeSemiPerimeter(int a, int b, int c)
{
    return 0.5 * (a + b + c);
}

float areaofTri(int a, int b, int c)
{
    float s = computeSemiPerimeter(a, b, c);
    return sqrt(s * (s - a) * (s - b) * (s - c));
}
int main()
{
    cout << areaofTri(4, 5) << endl;
    cout << areaofTri(3, 4, 5) << endl;
}