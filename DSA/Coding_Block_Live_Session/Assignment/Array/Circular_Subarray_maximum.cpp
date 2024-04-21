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
// C++ program for maximum contiguous circular sum problem
#include <bits/stdc++.h>
using namespace std;

// The function returns maximum
// circular contiguous sum in a[]
int maxCircularSum(int a[], int n)
{
    // Corner Case
    if (n == 1)
        return a[0];

    // Initialize sum variable which store total sum of the array.
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }

    // Initialize every variable with first value of array.
    int curr_max = a[0], max_so_far = a[0], curr_min = a[0], min_so_far = a[0];

    // Concept of Kadane's Algorithm
    for (int i = 1; i < n; i++)
    {
        // Kadane's Algorithm to find Maximum subarray sum.
        curr_max = max(curr_max + a[i], a[i]);
        max_so_far = max(max_so_far, curr_max);

        // Kadane's Algorithm to find Minimum subarray sum.
        curr_min = min(curr_min + a[i], a[i]);
        min_so_far = min(min_so_far, curr_min);
    }

    if (min_so_far == sum)
        return max_so_far;

    // returning the maximum value
    return max(max_so_far, sum - min_so_far);
}

/* Driver program to test maxCircularSum() */
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << maxCircularSum(a, n) << endl;
}
