#include <iostream>
using namespace std;
int main()
{
    int arr[10][10] = {
        {11,12,13,14},
        {22,23,24,15},
        {21,26,25,16},
        {20,19,18,17},
    };
    int m = 4;
    int n = 4;

    int sr = 0;
    int er = m - 1;

    int sc = 0;
    int ec = n - 1;

    while (sr <= er and sc <= ec)
    {
        for (int j = sc; j <= ec; j++)
        {
            cout << arr[sr][j] << " ";
        }
        sr++;

        for (int i = sr; i <= er; i++)
        {
            cout << arr[i][ec] << " ";
        }
        ec--;

        if (sr <= er)
        {
            for (int j = ec; j >= sc; j--)
            {
                cout << arr[er][j] << " ";
            }
            er--;
        }
        if (sc <= ec)
        {
            for (int i = er; i >= sr; i--)
            {
                cout << arr[i][sc] << " ";
            }
            sc++;
        }
    }
}