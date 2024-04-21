/*
Rain-Water Trapping

Given an array of N integers representing height of N buildings, find the total amount of rainwater that can be trapped between the building such width of each building is 1 unit.

Example :

0 1 2 3 4 5 6 7 8 9 10 11
0 1 0 2 1 0 1 3 2 1 2  1

*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int h[n];
    for (int i = 0; i < n;i++)
    {
        cin >> h[i];
    }

    // time: O(n^2)
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        // Compute max water trap in the bulding i.e., wi
        // li: 0 to i
        int li = h[i]; // assuming h[i] is the talles in the range o to i-1
        for (int j = i - 1; j >= 0;j--)
        {
            li = max(li, h[j]);
        }

        // ri: i to n-1
        int ri = h[i]; //assuming h[i] is the tallest in the range i to n-1
        for (int j = i + 1; j < n;j++)
        {
            ri = max(ri, h[j]);
        }


        int wi = min(li, ri) - h[i];
        total += wi;
    }
    cout << total<<endl;
}