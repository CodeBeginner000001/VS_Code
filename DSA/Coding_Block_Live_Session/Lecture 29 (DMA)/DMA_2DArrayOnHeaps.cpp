#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the no. of rows : ";
    cin>>m;

    int n;
    cout<<"Enter the no. of columns : ";
    cin>>n;

    // create a 2D array of dimension 'mxn' on the heap memory
    int **arr = new int*[m];
    for(int i=0;i<m;i++)
    {
        arr[i] = new int[n];
    }

    //read values into the 2D array
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }

    cout<<endl;
    // print value of the 2D array

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;


    // deallocate Memory for 2D array
    for(int i=0;i<m;i++)
    {
        delete [] arr[i];
    }

    delete [] arr;
}