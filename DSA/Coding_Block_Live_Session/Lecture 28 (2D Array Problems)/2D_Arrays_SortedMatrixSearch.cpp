#include<iostream>
#include<algorithm>
using namespace std;


// time complexity: O(m*logn)
bool isPresent(int mat[][3],int m,int n,int t)
{
    for(int i=0;i<m;i++)
    {
       if( binary_search(mat[i],mat[i+1],t) ) return true;
    }
    return false;
}

int main()
{
    int mat[][3] = {
		{40, 50, 60},
		{10, 20, 30},
		{70, 80, 90}
	};

	int m = 3;
	int n = 3;

	int t = 200;
    isPresent(mat,m,n,t)?cout<<"Found":cout<<"Not Found";
    cout<<endl;
}