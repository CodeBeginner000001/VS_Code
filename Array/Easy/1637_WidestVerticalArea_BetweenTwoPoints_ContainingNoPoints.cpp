/*
Given n points on a 2D plane where points[i] = [xi, yi], Return the widest vertical area between 
two points such that no points are inside the area.

A vertical area is an area of fixed-width extending infinitely along the y-axis (i.e., infinite 
height). The widest vertical area is the one with the maximum width.

Note that points on the edge of a vertical area are not considered included in the area.

 

Example 1:
​
Input: points = [[8,7],[9,9],[7,4],[9,7]]
Output: 1
Explanation: Both the red and the blue area are optimal.
Example 2:

Input: points = [[3,1],[9,0],[1,0],[1,4],[5,3],[8,8]]
Output: 3
 

Constraints:

n == points.length
2 <= n <= 105
points[i].length == 2
0 <= xi, yi <= 109
*/
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    // time complexity : O(nlogn)
    int n;
    cin>>n;
    vector<vector<int> >points(n,vector<int>(2));
    for(int i=0;i<n;i++) for(int j=0;j<2;j++) cin>>points[i][j];
    sort(points.begin(),points.end());
    // for(int i=0;i<points.size();i++){
    //     for(int j=0;j<points[i].size();j++) cout<< points[i][j]<<" ";
    //     cout<<endl;
    // }
    int max1=0;
    for(int i=0;i<n-1;i++)
    {
        max1= max(points[i+1][0]-points[i][0],max1);
    }
    cout<<max1;
}