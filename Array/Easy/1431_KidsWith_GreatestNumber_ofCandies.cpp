/*
There are n kids with candies. You are given an integer array candies, where each candies[i] represents the number of candies the ith kid has, and an integer extraCandies, denoting the number of extra candies that you have.

Return a boolean array result of length n, where result[i] is true if, after giving the ith kid all the extraCandies, they will have the greatest number of candies among all the kids, or false otherwise.

Note that multiple kids can have the greatest number of candies.

 

Example 1:

Input: candies = [2,3,5,1,3], extraCandies = 3
Output: [true,true,true,false,true] 
Explanation: If you give all extraCandies to:
- Kid 1, they will have 2 + 3 = 5 candies, which is the greatest among the kids.
- Kid 2, they will have 3 + 3 = 6 candies, which is the greatest among the kids.
- Kid 3, they will have 5 + 3 = 8 candies, which is the greatest among the kids.
- Kid 4, they will have 1 + 3 = 4 candies, which is not the greatest among the kids.
- Kid 5, they will have 3 + 3 = 6 candies, which is the greatest among the kids.
Example 2:

Input: candies = [4,2,1,1,2], extraCandies = 1
Output: [true,false,false,false,false] 
Explanation: There is only 1 extra candy.
Kid 1 will always have the greatest number of candies, even if a different kid is given the extra candy.
Example 3:

Input: candies = [12,1,12], extraCandies = 10
Output: [true,false,true]
 

Constraints:

n == candies.length
2 <= n <= 100
1 <= candies[i] <= 100
1 <= extraCandies <= 50
*/
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> candies(n);
    for(int i=0;i<n;i++)cin>>candies[i];
    int extraCandies;
    cin>>extraCandies;
    vector<bool>result;
    for(int i=0;i<n;i++)
    {
        int key=(candies[i]+extraCandies);
        bool flag=false;
        for(int j=0;j<n;j++)
        {
            if(key>=candies[j])
            {
                flag=true;
            }
            else{
                flag=false;
                break;
            }
        }
         if(flag) result.push_back(1);
            else result.push_back(0);
    }
    for(int i=0;i<n;i++) cout<<result[i]<<" ";
}
// leetcode
/*
// time complexiy: O(n^2);
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
    int n = candies.size();
    vector<bool>result;
    for(int i=0;i<n;i++)
    {
        int key=(candies[i]+extraCandies);
        bool flag=false;
        for(int j=0;j<n;j++)
        {
            if(key>=candies[j])
            {
                flag=true;
            }
            else{
                flag=false;
                break;
            }
        }
         if(flag) result.push_back(1);
            else result.push_back(0);
    } 
    return result;
    }
};
*/

/*
//optimal approach 
// time complexity: O(n)
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
    int n = candies.size();
    vector<bool>result;
    int max1=INT_MIN;
    for(auto i:candies)
    {
        max1 = max(i,max1);
    }
    for(auto j:candies)
    {
        if(j+extraCandies>=max1) result.push_back(1);
        else result.push_back(0);
    }
    return result;
    }
};
*/