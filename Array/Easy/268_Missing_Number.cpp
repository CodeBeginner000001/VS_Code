/**
Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range
that is missing from the array.



Example 1:

Input: nums = [3,0,1]
Output: 2
Explanation: n = 3 since there are 3 numbers, so all numbers are in the range [0,3]. 2 is the missing number in
the range since it does not appear in nums.

Example 2:

Input: nums = [0,1]
Output: 2
Explanation: n = 2 since there are 2 numbers, so all numbers are in the range [0,2]. 2 is the missing number in
the range since it does not appear in nums.

Example 3:

Input: nums = [9,6,4,2,3,5,7,0,1]
Output: 8
Explanation: n = 9 since there are 9 numbers, so all numbers are in the range [0,9]. 8 is the missing number
in the range since it does not appear in nums.


Constraints:

n == nums.length
1 <= n <= 104
0 <= nums[i] <= n
All the numbers of nums are unique.


Follow up: Could you implement a solution using only O(1) extra space complexity and O(n) runtime complexity?
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    if (n % 2 != 0)
    {
        int total_sum = n * ((n + 1) / 2);
        int arr_sum = 0;
        for (int i = 0; i < n; i++)
            arr_sum += arr[i];
        if (total_sum == (arr[n - 1] + 1))
        {
            cout << total_sum;
        }
        else
        {
            cout << total_sum - arr_sum;
        }
    }
    else
    {
        int total_sum = (n + 1) * (n / 2);
        int arr_sum = 0;
        for (int i = 0; i < n; i++)
            arr_sum += arr[i];
        if (total_sum == (arr[n - 1]))
        {
            cout << total_sum;
        }
        else
        {
            cout << total_sum - arr_sum;
        }
    }
}
// leetcode
/*
class Solution {
public:
    int missingNumber(vector<int>& nums) {
    int n= nums.size();
    int final_ans=0;
    if (n % 2 != 0)
    {
        int total_sum = n * ((n + 1) / 2);
        int nums_sum = 0;
        for (int i = 0; i < n; i++)
            nums_sum += nums[i];
        if (total_sum == (nums[n - 1] + 1))
        {
            final_ans=total_sum;
        }
        else
        {
            final_ans=total_sum - nums_sum;
        }
    }
    else
    {
        int total_sum = (n + 1) * (n / 2);
        int nums_sum = 0;
        for (int i = 0; i < n; i++)
            nums_sum += nums[i];
        if (total_sum == (nums[n - 1]))
        {
            final_ans= total_sum;
        }
        else
        {
            final_ans= total_sum - nums_sum;
        }
    }
    return final_ans;
    }
};
*/