#include<iostream>
#include<string>
using namespace std;

// time complexity: O(n)

int longestGoodString(const string& str)
{
    int maxsofar= 0;
    int count=0;
    for(char ch:str)
    {
         if ((ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'))
         {
            count++;
            maxsofar = max(maxsofar, count);
         }else{
            count=0;
         }
    }
    return maxsofar;
}

int main()
{
    string str = "cbaeicdeiou";
    cout << longestGoodString(str)<<endl;
}
