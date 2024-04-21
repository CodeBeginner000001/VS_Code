/*
Rain-Water Trapping

Given an array of N integers representing height of N buildings, find the total amount of rainwater that can be trapped between the building such width of each building is 1 unit.

Example :

0 1 2 3 4 5 6 7 8 9 10 11
0 1 0 2 1 0 1 3 2 1 2  1

*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int h[n];
    for (int i = 0; i < n; i++)
    {
        cin >> h[i];
    }
    // // n steps
    // // li: 0 to i
    // int l[n];
    // l[0] = h[0]; // assuming h[i] is the talles in the range o to i-1
    // for (int i=1; i <=n-1; i++)
    // {
    //     l[i] = max(l[i-1], h[i]);
    // }
    // n steps
    // ri: i to n-1
    int r[n];
    r[n-1] = h[n-1]; // assuming h[i] is the tallest in the range i to n-1
    for (int i = n-2; i>=0; i--)
    {
        r[i] = max(r[i+1], h[i]);
    }
    // total time : n+n+n=3n ~O(n)
    // total space : n+n=2n  ~O(n)
    // by finding li inside the below loop wwe have reduced our space
    // total space : n ~ O(n)
    int total = 0;
    int li = 0;
    for (int i = 0; i < n; i++)
    {
        // Compute max water trap in the bulding i.e., wi
        li = max(li, h[i]);
        int wi = min(li, r[i]) - h[i];
        total += wi;
    }
    cout << total << endl;
}