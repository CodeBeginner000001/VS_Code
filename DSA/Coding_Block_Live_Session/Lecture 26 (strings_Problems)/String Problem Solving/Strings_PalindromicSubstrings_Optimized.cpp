#include<iostream>
#include<string>
using namespace std;

int CountPalindromeSubString(const string& s)
{
    int n = s.size();
    int count = 0;
    // 1. Count the no. of oddLength palindromic string i.e., using index's [0,1,2] 
    for(int i=0;i<n;i++)
    {   // count the no of odd length palindrome sunstring around s[i]
        int j=0;
        while(i+j<n and i-j>=0 and s[i-j]==s[i+j])
        {
            // You've found the a palindromic around s[i]
            count++;
            j++;
        }
    }
    // 2. Count the no. of evenLength palindromic substring i.e., involving index's [0,1,2,3]
    for(double i=0.5;i<n;i++)
    {  // count the no. of evenLength palindrome substring around ith center
        double j=0.5;
        while(i+j<n and i-j>=0 and s[static_cast<int>(i+j)]==s[static_cast<int>(i-j)])
        {  // you've found a palindromic around s[i]
            count++;
            j++;
        }
    }
    return count;
}

int main()
{
    string s = "abaaba";
    cout<<CountPalindromeSubString(s)<<endl;
}