/*
Given a circular integer array nums of length n,
return the maximum possible sum of a non-empty subarray of nums.

A circular array means the end of the array connects to the
beginning of the array. Formally, the next element of nums[i] is
nums[(i + 1) % n] and the previous element of nums[i] is nums[(i - 1 + n) % n].

A subarray may only include each element of the fixed buffer nums at m
ost once. Formally, for a subarray nums[i], nums[i + 1], …, nums[j],
there does not exist i <= k1, k2 <= j with k1 % n == k2 % n.


Input Format:
First Line contain Size of array Second Line has array elements


Constraints:
1 <= n <= 3 * 10^4
-3 * 10^4 <= nums[i] <= 3 * 10^4


Output Format:
return maximum sum


Sample Input:
3
5 -3 5
Sample Output:
10

Explanation:
Subarray [5,5] has maximum sum 5 + 5 = 10

*/