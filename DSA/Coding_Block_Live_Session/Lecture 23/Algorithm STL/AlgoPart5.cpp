#include <iostream>
using namespace std;
int main()
{
    int arr[] = {10, 10, 20, 30, 30, 30, 40, 40, 50};
    int n = sizeof(arr) / sizeof(int);

    // array should sorted to use the following function
    int key = 30;
    cout<<endl;
    // 1. searching for a key in a sorted sequence in O(logn) using binary_search()
    binary_search(arr, arr + n, key) ? cout << key << " found" << endl : cout << key << " not found" << endl;
    // 2. Finding lower bound for a key in a sorted sequence in O(logn) using lower_bound()
    auto lb = lower_bound(arr, arr + n, key);
    cout << "1st Occurrence of " << key << " found at index " << lb - arr << endl;
    // 3. Finding upper_bound for a key in a sorted sequence in O(logn) using upper_bound()
    auto ub = upper_bound(arr, arr + n, key);
    cout << "upper bound of " << key << " found at index " << ub - arr << endl;
    // 4. Counting the occurences of a key in a sorted sequence in O(logn)
    cout << "Count of " << key << " = " << ub - lb << endl;
}