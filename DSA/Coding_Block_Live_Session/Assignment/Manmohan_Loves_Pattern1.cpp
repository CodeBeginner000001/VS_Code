/*
Given N, help Manmohan to print pattern upto N lines. 
For eg For N=6 , following pattern will be printed.

1
11
111
1001
11111
100001

Input Format:
Single number N.

Constraints
N<=1000

Output Format:
Pattern corresponding to N.

Sample Input
6
Sample Output
1
11
111
1001
11111
100001

Explanation:
For every odd number row print 1, odd number of times and for every 
even number row , print first and last character as 1 and rest of 
middle characters as 0.
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i <n;i++)
    {
        int j = 0;
        while(j<=i)
        {
            if((i>=0 && j==0) || i==j)
            {
                cout << "1";
            }
            else if(i>j)
            {
                if(i%2==0)
                {
                    cout << "1";
                }
                else
                {
                    cout << "0";
                }
            }
            j++;
        }
        cout << endl;
    }
}