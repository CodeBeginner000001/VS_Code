/**
Given an array of integers nums sorted in non-decreasing order, find the starting and 
ending position of a given target value.

If target is not found in the array, return [-1, -1].

You must write an algorithm with O(log n) runtime complexity.

 

Example 1:

Input: nums = [5,7,7,8,8,10], target = 8
Output: [3,4]
Example 2:

Input: nums = [5,7,7,8,8,10], target = 6
Output: [-1,-1]
Example 3:

Input: nums = [], target = 0
Output: [-1,-1]
 

Constraints:

0 <= nums.length <= 105
-109 <= nums[i] <= 109
nums is a non-decreasing array.
-109 <= target <= 109
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int target;
    cin>>target;
    int s=0;
    int e=n-1;
    int first_index=-1;
    int last_index=-1;
    while(s<e)
    {
        if((arr[s]==target && arr[e]==target))
        {
                first_index=s; 
                last_index=e; 
                break;  
        }
        else if((arr[s]==target || arr[e]==target))
        {
            if(arr[s]==target) 
            {
                first_index=s;
                e--;
            }else
            if(arr[e]== target) 
            {
                last_index=e;
                s++;
            }    
        }else if(arr[s]!=target)
        {
            s++;
        }
        else e--;
        
    }
    if(first_index<0 && last_index<0)
    {
        cout<<"[-1,-1]"<<endl;
    }
    else
    {
        cout<<first_index<<" "<<last_index;
    }    

}