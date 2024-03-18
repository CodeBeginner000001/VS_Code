/*

Given a string of length n, generate all of its subsequences.

A subsequence of a given string (sequence) is a string (sequence) that is generated by
removing zero or more characters from the given string (sequence) without changing its
order.

Example

	Input : inp[] = "abc"
	Output: ["", "c", "b", "bc", "a", "ac", "ab", "abc"]

Constraints

  1 < n < 10

*/

#include<iostream>

using namespace std;

void f(char* inp, char* out, int i, int j) {

	// base case

	if (inp[i] == '\0') {
		out[j] = '\0';
		cout << out << endl;
		return;
	}

	// recursive case

	// generate all the subsequences of inp[i...] or take decisions for the remaining characters starting from the ith index

	// take a decision for inp[i]

	// 1. include inp[i] in the out[]

	out[j] = inp[i];
	f(inp, out, i + 1, j + 1);

	// 2. exclude inp[i] from the out[]

	f(inp, out, i + 1, j);

}

int main() {

	char inp[] = "abc";
	char out[10];

	f(inp, out, 0, 0);

	return 0;
}