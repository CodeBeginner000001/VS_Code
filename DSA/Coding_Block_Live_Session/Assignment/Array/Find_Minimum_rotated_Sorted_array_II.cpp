/*
Suppose an array of length n sorted in ascending order is rotated
between 1 and n times. For example, the array nums = [0,1,4,4,5,6,7]
might become:

[4,5,6,7,0,1,4] if it was rotated 4 times. [0,1,4,4,5,6,7] if it was
rotated 7 times. Notice that rotating an array [a[0], a[1], a[2], …,
a[n-1]] 1 time results in the array [a[n-1], a[0], a[1], a[2], …, a[n-2]].

Given the sorted rotated array nums that may contain duplicates ,
Print the minimum element of this array.

Note : You must decrease the overall operation steps as much as possible.


Input Format:
First line contains an integer n.
Second line contains an integer array nums.


Constraints:
1 <= n <= 105
-104 <= nums[i] <= 104
nums is sorted and rotated between 1 and n times.

Output Format:
Print the minimum element of the array.


Sample Input:
5
3 3 3 1 2
Sample Output:
1

Explanation:
Minimum element of the array is 1.
*/