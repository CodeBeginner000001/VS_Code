/*
You are given an integer array banned and two integers n and maxSum. You are choosing some number of integers following the below rules:

The chosen integers have to be in the range [1, n].
Each integer can be chosen at most once.
The chosen integers should not be in the array banned.
The sum of the chosen integers should not exceed maxSum.
Return the maximum number of integers you can choose following the mentioned rules.

 

Example 1:

Input: banned = [1,6,5], n = 5, maxSum = 6
Output: 2
Explanation: You can choose the integers 2 and 4.
2 and 4 are from the range [1, 5], both did not appear in banned, and their sum is 6, which did not exceed maxSum.
Example 2:

Input: banned = [1,2,3,4,5,6,7], n = 8, maxSum = 1
Output: 0
Explanation: You cannot choose any integer while following the mentioned conditions.
Example 3:

Input: banned = [11], n = 7, maxSum = 50
Output: 7
Explanation: You can choose the integers 1, 2, 3, 4, 5, 6, and 7.
They are from the range [1, 7], all did not appear in banned, and their sum is 28, which did not exceed maxSum.

*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maxIntegers(vector<int>& banned, int n, int maxSum) {
    // Sort the banned array for easier checking
    sort(banned.begin(), banned.end());
    
    int sum = 0;
    int count = 0;

    // Iterate through the range [1, n]
    for (int i = 1; i <= n; ++i) {
        // Check if the current integer is in the banned list
        if (find(banned.begin(), banned.end(), i) == banned.end()) {
            // Check if adding this integer exceeds maxSum
            if (sum + i <= maxSum) {
                sum += i; // Add the integer to the sum
                count++;  // Increment the count of chosen integers
            } else {
                break; // Stop if we exceed maxSum
            }
        }
    }
    
    return count; // Return the maximum count of integers chosen
}

int main() {
    vector<int> banned = {1,2,3,4,5,6,7};
    int n = 8;
    int maxSum = 1;

    int result = maxIntegers(banned, n, maxSum);
    cout << result << endl; // Output: 2

    return 0;
}