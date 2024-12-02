/**
 Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You must write an algorithm with O(log n) runtime complexity.



Example 1:

Input: nums = [1,3,5,6], target = 5
Output: 2
Example 2:

Input: nums = [1,3,5,6], target = 2
Output: 1
Example 3:

Input: nums = [1,3,5,6], target = 7
Output: 4


Constraints:

1 <= nums.length <= 104
-104 <= nums[i] <= 104
nums contains distinct values sorted in ascending order.
-104 <= target <= 104

 */
#include <iostream>
using namespace std;
int searchInsert(vector<int> &nums, int target)
{
    int s = 0;
    int e = nums.size();
    while (s <e)
    {
        int mid = s + (e - s) / 2;
        // if target is same as of the nums[mid] so return the same index
        if (target == nums[mid])
        {
            return mid;
        }
        else if (target > nums[mid])
        { // if target is greater the nums[mid]
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
    }
    return s;
}
int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    int target;
    cin >> target;
    cout << searchInsert(nums, target) << endl;
}