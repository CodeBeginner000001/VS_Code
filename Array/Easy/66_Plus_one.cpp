/**
You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer.
The digits are ordered from most significant to least significant in left-to-right order.
The large integer does not contain any leading 0's.

Increment the large integer by one and return the resulting array of digits.



Example 1:

Input: digits = [1,2,3]
Output: [1,2,4]
Explanation: The array represents the integer 123.
Incrementing by one gives 123 + 1 = 124.
Thus, the result should be [1,2,4].
Example 2:

Input: digits = [4,3,2,1]
Output: [4,3,2,2]
Explanation: The array represents the integer 4321.
Incrementing by one gives 4321 + 1 = 4322.
Thus, the result should be [4,3,2,2].
Example 3:

Input: digits = [9]
Output: [1,0]
Explanation: The array represents the integer 9.
Incrementing by one gives 9 + 1 = 10.
Thus, the result should be [1,0].


Constraints:

1 <= digits.length <= 100
0 <= digits[i] <= 9
digits does not contain any leading 0's.
*/
#include <iostream>
using namespace std;
// time complexity: O(N)
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // Increment the array by 1
    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] == 9)
        {
            arr[i] = 0;
        }
        else
        {
            arr[i]++;
            break;
        }
    }

    // If all digits were 9, add a new digit 1 at the beginning
    if (arr[0] == 0)
    {
        arr[-1] = 1;
    }

    // Print the resulting array
    if (arr[-1] == 1)
    {
        for (int i = -1; i < n; i++)
        {
            cout << arr[i] << " ";
        }
    }
    else{
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
    }

    return 0;
}

// Leetcode
/*
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) 
    {
    int n=digits.size();
    for (int i = n - 1; i >= 0; i--)
    {
        if (digits[i] == 9)
        {
            digits[i] = 0;
        }
        else
        {
            digits[i]++;
            break;
        }
    }

    if (digits[0] == 0)
    {
        digits.insert(digits.begin()+ (0),1);
    }
    return digits;
    }
    // time complexity: O(N)
};
*/