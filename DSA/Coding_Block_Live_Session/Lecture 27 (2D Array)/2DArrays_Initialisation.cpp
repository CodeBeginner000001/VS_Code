#include <iostream>
using namespace std;
int main()
{
    int arr[][4] = {
        {10, 15, 20, 25},
        {30, 35, 40, 45},
        {50, 55, 60, 65}};

    /* To initalize with 0 we can use */

    // memset(arr,0,sizeof(arr));

    int m = 3;
    int n = 4;
    // Print the 2D array
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout<<endl;
    // if cols are not initalized completely
        int arr1[][4] = {
        {10, 15, 20, 25},
        {30, 35, 40, 45},
        {50, 55}};

    // Print the 2D array
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }
}