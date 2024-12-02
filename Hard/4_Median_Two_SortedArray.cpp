/**
Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.

The overall run time complexity should be O(log (m+n)).



Example 1:

Input: nums1 = [1,3], nums2 = [2]
Output: 2.00000
Explanation: merged array = [1,2,3] and median is 2.
Example 2:

Input: nums1 = [1,2], nums2 = [3,4]
Output: 2.50000
Explanation: merged array = [1,2,3,4] and median is (2 + 3) / 2 = 2.5.


Constraints:

nums1.length == m
nums2.length == n
0 <= m <= 1000
0 <= n <= 1000
1 <= m + n <= 2000
-106 <= nums1[i], nums2[i] <= 106
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int m;
    cin >> m;
    int arr1[n + m];
    memset(arr1, 0, sizeof(arr1));
    int arr2[m];
    for (int i = 0; i < n; i++)
        cin >> arr1[i];
    for (int i = 0; i < m; i++)
        cin >> arr2[i];
    //  Merging Sorted Array
    int i = n - 1;
    int j = m - 1;
    int k = n + m - 1;
    while (i >= 0 && j >= 0)
    {
        if (arr1[i] > arr2[j])
        {
            arr1[k] = arr1[i];
            i--;
        }
        else
        {
            arr1[k] = arr2[j];
            j--;
        }
        k--;
    }
    while (j >= 0)
    {
        arr1[k] = arr2[j];
        j--;
        k--;
    }
    // Finding Median
    if ((m + n) % 2 == 0)
    {
        int mid1 = (m + n) / 2;
        float num = (arr1[mid1 - 1] + arr1[mid1]) / 2.0;
        cout << num << endl;
    }
    else
    {
        int odd_mid = ceil((n + m) / 2);
        float num = arr1[odd_mid] / 1.0;
        cout << num << endl;
    }
}

// leetcode
/*
// time complexity ~ O(n+m)
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    float num; 
    int n = nums1.size();
    int m = nums2.size();
    vector<int>merged(n+m);
    merge(nums1.begin(),nums1.end(),nums2.begin(),nums2.end(),merged.begin());
    // Finding Median
    if ((m + n) % 2 == 0)
    {
        int mid1 = (m + n) / 2;
        num = (merged[mid1 - 1] + merged[mid1]) / 2.0;
        
    }
    else
    {
        int odd_mid = ceil((n + m) / 2);
        num = merged[odd_mid] / 1.0;
    }
    return num;
    }
};
*/