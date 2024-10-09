/*
Aggressive Cows
A Farmer has built a new long barn, with N (2 <= N <= 105) stalls. The stalls are located along a straight line at positions x1…xN (0 <= xi <= 109).
His C (2 <= C <= N) cows don't like this barn layout and become aggressive towards each other once put into a stall.

To prevent the cows from hurting each other, the farmer wants to assign the cows to the stalls, such that the minimum distance between any
two of them is as large as possible.

What is the largest minimum distance?

Example
Input : C=3, N=5 [1, 2, 4, 8, 9]
Output : 3
*/
#include<iostream>
#include<algorithm>
using namespace std;

bool Possible(int arr[],int n,int c,int mid)
{
    int cows=1;
    int lastPos = arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]-lastPos>=mid){
            cows++;
            if(cows==c) return true;
            lastPos = arr[i];
        }
    }
    return false;
}


int FindLargestMinDistance(int arr[],int n,int c)
{
    int s=0;
    int e= arr[n-1]-arr[0];
    int ans=0;
    int mid = s+(e-s)/2;
    while(s<=e)
    {
        if(Possible(arr,n,c,mid))
        {
            ans=mid;
            s=mid+1;
        }else
        {
            e=mid-1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    int c;
    cin>>c;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    cout<<FindLargestMinDistance(arr,n,c)<<endl;
}