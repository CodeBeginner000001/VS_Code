#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int m;
    cin >> m;
    int arr2[m];
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }

    int c = 0;
    int N = max(n, m);
    int j = N - 1;
    while (j >= 0)
    {
        arr2[j] = (c + arr[n - 1] + arr2[j]) % 10;
        c = (arr[n - 1] + arr2[m - 1]) / 10;
        n--;
        j--;
    }
    for (int i = 0; i < N; i++)
    {
        cout << arr2[i] << ", ";
    }
    cout << "END" << endl;
}