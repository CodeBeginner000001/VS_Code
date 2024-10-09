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

    // time: O(n)
    // space: O(1)
    int total = 0;
    int i = 0;
    int j = n - 1;

    int l = 0; // max:[0 to i-1]
    int r = 0; // max:[j to n-1]

    while(i<=j)
    {
        l = max(l, h[i]);
        r = max(r, h[j]);

        if(l<r)
        {
            int wi = l - h[i];
            total += wi;
            i++;
        }
        else
        {
            int wj = r - h[j];
            total += wj;
            j--;
        }
    }
    cout << total << endl;
}