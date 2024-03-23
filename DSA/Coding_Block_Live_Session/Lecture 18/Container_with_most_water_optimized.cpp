/*
Container with Most Water

Given an array of N integers representing heights of N vertical lines. Find two lines that together with the x-axis form a container, such that the container contains the most water. Return the maximum amount of water a container can store.

Example

Input:

N = 9
0 1 2 3 4 5 6 7 8
1 8 6 2 5 4 8 3 7

Output : 49

*/
#include <iostream>
using namespace std;
// time: O(n)
//  space: O(1)
int maxwater(int height[], int n)
{
    int maxsofar = 0;
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        int width = j - i;
        int Height = min(height[i], height[j]);
        int area = width * Height;
        maxsofar = max(area, maxsofar);
        if (height[i] < height[j])
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    return maxsofar;
}

int main()
{
    int n;
    cin >> n;
    int height[n];
    for (int i = 0; i < n; i++)
    {
        cin >> height[i];
    }
    cout << maxwater(height, n);
}