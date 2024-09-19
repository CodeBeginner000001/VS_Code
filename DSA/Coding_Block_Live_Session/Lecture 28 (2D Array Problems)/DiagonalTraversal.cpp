#include<iostream>
using namespace std;

void printDiagonalElement(int mat[][10],int m,int n,int i,int j)

{
    int diagonalLength = min(m-i,n-j);
    for(int k=0;k<diagonalLength;k++)
    {
        // cout<<mat[i][j]<<" ";
        // i++;
        // j++;

        cout<<mat[i+k][j+k]<<" ";
    }
}


void traverseMatrix(int mat[][10],int m,int n){

    for(int i=m-1;i>=1;i--)
    {
        printDiagonalElement(mat,m,n,i,0);
    }
    // cout<<endl;
    for(int j=0;j<n;j++)
    {
        printDiagonalElement(mat,m,n,0,j);
    }
    
}



int main()
{
    int mat[10][10] = {
		{11, 12, 13, 14},
		{15, 16, 17, 18},
		{19, 20, 21, 22}
	};

	int m = 3;
	int n = 4;

	traverseMatrix(mat, m, n);
    cout<<endl;
}