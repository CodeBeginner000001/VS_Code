/*
Problem Statement: Given an array ‘arr of integer numbers, ‘ar[i]’ represents the number of pages in the ‘i-th’ book. There are a ‘m’ number of students, 
and the task is to allocate all the books to the students.
Allocate books in such a way that:

Each student gets at least one book.
Each book should be allocated to only one student.
Book allocation should be in a contiguous manner.
You have to allocate the book to ‘m’ students such that the maximum number of pages assigned to a student is minimum. If the allocation of books is not 
possible. 
return -1

Example 1:
Input Format:
 n = 4, m = 2, arr[] = {12, 34, 67, 90}
Result:
 113
Explanation:
 The allocation of books will be 12, 34, 67 | 90. One student will get the first 3 books and the other will get the last one.

Example 2:
Input Format:
 n = 5, m = 4, arr[] = {25, 46, 28, 49, 24}
Result:
 71
Explanation: The allocation of books will be 25, 46 | 28 | 49 | 24.

We can allocate books in several ways but it is clearly said in the question that we have to allocate the books in such a way that the maximum number of 
pages received by a student should be minimum.
Assume the given array is {25 46 28 49 24} and number of students, M = 4. Now, we can allocate these books in different ways. Some of them are the following:
25 | 46 | 28 | 49, 24  → Maximum no. of pages a student receive = 73
25 | 46 | 28, 49 | 24  → Maximum no. of pages a student receive = 77
25 | 46, 28 | 49 | 24  → Maximum no. of pages a student receive = 74
25, 46 | 28 | 49 | 24  → Maximum no. of pages a student receive = 71
From the above allocations, we can clearly observe that the minimum possible maximum number of pages is 71.
When it is impossible to allocate books:
When the number of books is lesser than the number of students, we cannot allocate books to all the students even if we give only a single book to 
each student. So, if m > n, we should return -1.
*/

#include<iostream>
using namespace std;

bool Possible(int arr[],int n,int m,int mid)
{
    int student =1;
    int pages=0;
    for (int i = 0; i < n; i++)
    {
        /* code */
        if(pages+arr[i]<=mid){
            pages+=arr[i];
        }else{
            student++;
            if(student>m || arr[i]>mid) return false;
            pages = arr[i];
        }
    }
    return true;
    
}

int MinPagesAssigned(int arr[],int n,int m)
{
    int s=0;
    int sum = 0;
    int answer = -1;
    for(int i=0;i<n;i++) sum+=arr[i];
    int e = sum;
    if(m>n)return -1;
    int mid = s+((e-s)/2);
    while(s<=e)
    {
        if(Possible(arr,n,m,mid))
        {
            answer = mid;
            e = mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+((e-s)/2);
    }
    return answer;
}

int main()
{
    int n;
    cin>>n;
    int m;
    cin>>m;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    cout<< MinPagesAssigned(arr,n,m)<<endl;
}