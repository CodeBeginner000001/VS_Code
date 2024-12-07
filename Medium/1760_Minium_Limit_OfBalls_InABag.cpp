/*
You are given an integer array nums where the ith bag contains nums[i] balls. You are also given an integer maxOperations.

You can perform the following operation at most maxOperations times:

Take any bag of balls and divide it into two new bags with a positive number of balls.
For example, a bag of 5 balls can become two new bags of 1 and 4 balls, or two new bags of 2 and 3 balls.
Your penalty is the maximum number of balls in a bag. You want to minimize your penalty after the operations.

Return the minimum possible penalty after performing the operations.
Example 1:
Input: nums = [9], maxOperations = 2
Output: 3
Explanation: 
- Divide the bag with 9 balls into two bags of sizes 6 and 3. [9] -> [6,3].
- Divide the bag with 6 balls into two bags of sizes 3 and 3. [6,3] -> [3,3,3].
The bag with the most number of balls has 3 balls, so your penalty is 3 and you 
should return 3.

Example 2:
Input: nums = [2,4,8,2], maxOperations = 4
Output: 2
Explanation:
- Divide the bag with 8 balls into two bags of sizes 4 and 4. [2,4,8,2] -> [2,4,4,4,2].
- Divide the bag with 4 balls into two bags of sizes 2 and 2. [2,4,4,4,2] -> [2,2,2,4,4,2].
- Divide the bag with 4 balls into two bags of sizes 2 and 2. [2,2,2,4,4,2] -> [2,2,2,2,2,4,2].
- Divide the bag with 4 balls into two bags of sizes 2 and 2. [2,2,2,2,2,4,2] -> [2,2,2,2,2,2,2,2].
The bag with the most number of balls has 2 balls, so your penalty is 2, and you should return 2.
 

Constraints:
1 <= nums.length <= 105
1 <= maxOperations, nums[i] <= 109
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// Approach 1: Brute Force
// int minimumSize(vector<int> nums, int maxOperations) {
//      if(maxOperations == 0 )
//     {
//         sort(nums.begin(),nums.end());
//         return nums[nums.size()-1];
//     }
//     sort(nums.begin(),nums.end());
//     int n = nums[nums.size()-1];
//     int answer=0;
//     int minsize = INT_MAX;
//     if(n%2==0)
//     {
//         nums.pop_back();
//         nums.push_back(n/2);
//         nums.push_back(n/2);
//         answer = minimumSize(nums,maxOperations-1);
//     }else{
//         for(int i=1;i<=n/2;i++)
//         {
//             nums.pop_back();
//             nums.push_back(i);
//             nums.push_back(n-i);
//             answer = minimumSize(nums,maxOperations-1);
//             if(answer < minsize)
//             {
//                 minsize = answer;
//             }
            
//         }
//         answer = minsize;
//     }
//     return answer;
// }

// Approach 2: Binary Search
// time complexity: O(nlogn)
// space complexity: O(1)
bool canAchievePenalty(const vector<int>& nums, int maxOperations, int penalty) {
    int operationsNeeded = 0;
    for (int balls : nums) {
        if (balls > penalty) {
            // Calculate how many operations are needed to reduce balls to penalty
            operationsNeeded += (balls - 1) / penalty; // This is equivalent to ceil(balls / penalty) - 1
            if (operationsNeeded > maxOperations) {
                return false; // No need to check further if we already exceed maxOperations
            }
        }
    }
    return operationsNeeded <= maxOperations;
}

int minimumSize(vector<int> nums, int maxOperations) {
    int left = 1; // Minimum possible penalty
    int right = *max_element(nums.begin(), nums.end()); // Maximum possible penalty
    int result = right;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (canAchievePenalty(nums, maxOperations, mid)) {
            result = mid; // We can achieve this penalty, try for a smaller one
            right = mid - 1;
        } else {
            left = mid + 1; // We cannot achieve this penalty, try for a larger one
        }
    }
    return result;
}
int main(){
    vector<int> nums = {7,17};
    int maxOperations = 2;
    cout<< minimumSize(nums,maxOperations);
}