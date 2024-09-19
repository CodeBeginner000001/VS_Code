#include <iostream>
using namespace std;

void sortDiagonals(int mat[][10], int m, int n, int i, int j)
{
    int diagonalLength = min(m - i, n - j);
    int arr[diagonalLength];
    for (int k = 0; k < diagonalLength; k++)
    {
        arr[k] = mat[i + k][j + k];
    }
    sort(arr, arr + diagonalLength);
    for (int k = 0; k < diagonalLength; k++)
    {
        mat[i + k][j + k] = arr[k];
    }
}

void sortMatrix(int mat[][10], int m, int n)
{
    for (int j = 0; j < n; j++)
    {
        sortDiagonals(mat, m, n, 0, j);
    }
    for (int i = 1; i < m; i++)
    {
        sortDiagonals(mat, m, n, i, 0);
    }
}

int main()
{
    int mat[][10] = {
        {50, 80, 20},
        {90, 10, 70},
        {60, 30, 40}};

    int m = 3;
    int n = 3;

    sortMatrix(mat, m, n);

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}