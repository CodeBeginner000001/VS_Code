/*
Given an array/list of length ‘N’, where the array/list represents the boards and each element of the given array/list represents the length of each board.
Some ‘K’ numbers of painters are available to paint these boards. Consider that each unit of a board takes 1 unit of time to paint.
You are supposed to return the area of the minimum time to get this job done of painting all the ‘N’ boards under the constraint that any painter will only
paint the continuous sections of boards.


Example 1:
Input Format:
 N = 4, boards[] = {5, 5, 5, 5}, k = 2
Result:
 10
Explanation:
 We can divide the boards into 2 equal-sized partitions, so each painter gets 10 units of the board and the total time taken is 10.

Example 2:
Input Format:
 N = 4, boards[] = {10, 20, 30, 40}, k = 2
Result:
 60
Explanation:
We can divide the first 3 boards for one painter and the last board for the second painter.

We can allocate the boards to the painters in several ways but it is clearly said in the question that we have to allocate the boards in such a way that
the painters can paint all the boards in the minimum possible time. The painters will work simultaneously.
Note: Upon close observation, we can understand that this problem is similar to the previous problem: BS-18. Allocate Books or
Book Allocation | Hard Binary Search. There we had to allocate books to the students and here we need to allocate walls to the painters.
Assume the given array is {10, 20, 30, 40} and number of painters, k = 2. Now, we can allocate these boards in different ways.
Some of them are the following:
10 | 20, 30, 40  → Minimum time required to paint all the boards  = 90
10, 20 | 30, 40  → Minimum time required to paint all the boards = 70
10, 20, 30 | 40  → Minimum time required to paint all the boards = 60
From the above allocations, we can clearly observe that in the last case, the first painter will paint the first 3 walls in 60 units of time and
the second painter will take 40 units of time. So, the minimum time required to paint all the boards is 60.
*/
#include<iostream>
using namespace std;

bool Possible(int arr[],int n ,int k ,int mid)
{
    int painter = 1;
    int time =0;
    for(int i=0;i<n;i++)
    {
        if(time+arr[i]<=mid){
            time+=arr[i];
        }else{
            painter++;
            if(painter>k || arr[i]>mid) return false;
            time = arr[i];
        }
    }
    return true;
}

int FindMinLargestTime(int arr[],int n ,int k)
{
    int s=0;
    int sum =0;
    int ans=0;
    for(int i=0;i<n;i++) sum+=arr[i];
    int e = sum;
    int mid = s+(e-s)/2;
    while(s<=e)
    {
        if(Possible(arr,n,k,mid))
        {
            ans = mid;
            e = mid-1;
        }else{
            s = mid+1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    int k;
    cin>>k;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    sort(arr,arr+n);
    cout<<FindMinLargestTime(arr,n,k)<<endl;
}