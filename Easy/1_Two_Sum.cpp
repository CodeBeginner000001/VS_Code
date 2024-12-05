/**
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
You can return the answer in any order.

Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
Example 2:

Input: nums = [3,2,4], target = 6
Output: [1,2]
Example 3:

Input: nums = [3,3], target = 6
Output: [0,1]


Constraints:

2 <= nums.length <= 104
-109 <= nums[i] <= 109
-109 <= target <= 109
Only one valid answer exists.


Follow-up: Can you come up with an algorithm that is less than O(n2) time complexity?
*/
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
    int t;
    cin >> t;
    int last = -1;
    for (int i = 0; i < n; i++)
    {
        int key = t - arr[i];
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] == key)
            {
                last = j;
                break;
            }
        }
        if (last != i && last >= 0)
            {
                cout << i << " " << last;
                break;
            }
    }
}

// leetcode
/**
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    int n = nums.size();
    int last = -1;
    for (int i = 0; i < n; i++)
    {
        int key = target - nums[i];
        for (int j = i + 1; j < n; j++)
        {
            if (nums[j] == key)
            {
                last = j;
                break;
            }
        }
        if (last != i && last >= 0)
            {
                nums.clear();
                nums.push_back(i);
                nums.push_back(last);
                return nums;
            }
    }
    return {};
    }
};
*/