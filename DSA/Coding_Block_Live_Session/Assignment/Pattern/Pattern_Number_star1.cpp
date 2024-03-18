/*
Take as input N, a number. Print the pattern 
as given in output section for corresponding input.

Input Format
Enter value of N

Constraints
Output Format
All numbers and stars are Space separated


Sample Input
5
Sample Output
1 2 3 4 5
1 2 3 4 *
1 2 3 * * *
1 2 * * * * *
1 * * * * * * *

Explanation
Catch the pattern for the corresponding 
input and print them accordingly.
*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n;i++)
    {
        int j = 0;
        while(j<n)
        {
            if(i+j<=n-1)
            {
                cout << j + 1 << " ";
            }
            else{
                cout << "* ";
            }
            j++;
        }
        j = 0;
        while(j<n-2)
        {
            if(i>1 && j<i-1)
            {
                cout << "* ";
            }
            j++;
        }
        cout << endl;
    }
}