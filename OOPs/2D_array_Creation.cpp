#include<iostream>
using namespace std;
int main()
{    
    int row=5,col=6;
    int **arr=new int*[5];
    for(int i=0;i<5;i++)
    {
        arr[i]=new int[col];
    }
    // printing 2D array
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}