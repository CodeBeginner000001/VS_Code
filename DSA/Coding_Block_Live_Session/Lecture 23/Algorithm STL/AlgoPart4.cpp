#include <iostream>
using namespace std;
int main()
{
    int arr[] = {50, 40, 40, 30, 30, 30, 20, 10, 10};
    int n = sizeof(arr) / sizeof(int);
    // 1. searching for a key in a sequence using find()
    int key = 30;
    // int key = 100;
    auto it = find(arr, arr + n, key);
    if (it != arr + n)
        cout << key << " found at index " << it - arr << endl;
    else
        cout << key << " not found" << endl;
    // 2. counting the occurence of a key in a sequence using count()
    cout << count(arr, arr + n, key) << endl;
}