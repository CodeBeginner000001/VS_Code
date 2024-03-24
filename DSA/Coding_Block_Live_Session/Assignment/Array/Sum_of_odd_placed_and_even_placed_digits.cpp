/*
Take N as input. Print the sum of its odd placed digits and sum of its even placed digits.


Input Format:
Constraints:
0 < N <= 1000000000


Output Format:
Sample Input:
2635
Sample Output:
11
5

Explanation:
5 is present at 1st position, 3 is present at 2nd position, 6 is present
at 3rd position and 2 is present at 4th position.

Sum of odd placed digits on first line. 5 and 6 are placed at odd position.
Hence odd place sum is 5+6=11

Sum of even placed digits on second line. 3 and
}
*/
#include <iostream>
using namespace std;
// 1st approach
// time: O(n+n)~ 2n ~n
// space: O(10)
/*
int main()
{
    int n;
    cin >> n;
    int arr[10] = {};
    int j = 1;
    while (n != 0)
    {
        arr[j] = n % 10;
        n = n / 10;
        j++;
    }
    int even = 0;
    int odd = 0;
    for (int i = 1; i < j; i++)
    {
        if (i % 2 == 0)
        {
            even += arr[i];
        }
        else
        {
            odd += arr[i];
        }
    }
    cout << odd << endl
         << even << endl;
}
*/

// 2nd approach
// time: O(n)
// space: O(1)
int main()
{
    int n;
    cin >> n;
    int pos = 1;
    int even = 0;
    int odd = 0;
    while (n != 0)
    {
        int num = n % 10;
        n /= 10;
        if (pos % 2 == 0)
            even += num;
        else
            odd += num;
        pos++;
    }
    cout << odd << endl
         << even << endl;
}
