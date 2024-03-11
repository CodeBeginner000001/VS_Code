#include<iostream>

using namespace std;

int f(int* arr, int t, int s, int e) {

	// base case

	if (s > e) {
		// 't' not found since search space has become empty
		return -1;
	}

	// recursive case

	// find the 't' in arr[s...e]

	int m = s + (e - s) / 2;

	if (arr[m] == t) {
		// you've found the 't'
		return m;
	} else if (t > arr[m]) {
		// recursively, find the 't' in arr[m+1...e]
		return f(arr, t, m + 1, e);
	} else { // t< arr[m]
		// recursively, find the 't' in arr[s...m-1]
		return f(arr, t, s, m - 1);
	}





}

int main() {

	int arr[] = {10, 20, 30, 40, 50};
	int n = sizeof(arr) / sizeof(int);
	int t = 100;

	cout << f(arr, t, 0, n - 1) << endl;

	return 0;
}