/*
Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).

Return the running sum of nums.

 

Example 1:

Input: nums = [1,2,3,4]
Output: [1,3,6,10]
Explanation: Running sum is obtained as follows: [1, 1+2, 1+2+3, 1+2+3+4].
Example 2:

Input: nums = [1,1,1,1,1]
Output: [1,2,3,4,5]
Explanation: Running sum is obtained as follows: [1, 1+1, 1+1+1, 1+1+1+1, 1+1+1+1+1].
Example 3:

Input: nums = [3,1,2,10,1]
Output: [3,4,6,16,17]
 

Constraints:

1 <= nums.length <= 1000
-10^6 <= nums[i] <= 10^6
*/
#include<iostream>
#include<vector>
using namespace std;
// Time complexity: O(n)
int main()
{
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++) cin>>nums[i];
    vector<int> result;
    result.push_back(nums[0]);
    for(int i=1;i<n;i++)
    {
        result.push_back(result[i-1]+nums[i]);
    }
    for(int i=0;i<result.size();i++) cout<<result[i]<<" ";
}


// Method-1 Time Complexity ~O(n^2)
/*
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
    int n = nums.size();
    vector<int> result;
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=0;j<=i;j++)
        {
            sum+=nums[j];
        }
        result.push_back(sum);
    }
    return result;
    }
};
*/