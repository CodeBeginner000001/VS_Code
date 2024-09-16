#include<iostream>
#include<cstring>
using namespace std;

bool checkPalindrome(const char* str){
    int n = strlen(str);
    int i=0;
    int j=n-1;
    while(i<j){
        if(str[i]!=str[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main()
{
    char str[101];
    cout<<"Enter a string: ";
    cin.getline(str,101);
    checkPalindrome(str)?cout<<"Palindrome"<<endl:cout<<"Not Palindrome"<<endl;

}
