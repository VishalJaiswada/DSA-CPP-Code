#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

// 2D array printing and sum of all elements,maximum of ELEMENTS,minimum of elements

/*
 int maxValue2d(int arr[][10],int rows,int cols)
 {  int maxi=INT64_MIN;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            if(maxi<arr[i][j])
            {
                maxi=arr[i][j];
            }
        }
    }
    return maxi;
 }
  int minValue2d(int arr[][10],int rows,int cols)
 {  int mini=INT64_MAX;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
             if(mini > arr[i][j])
             {
               mini=arr[i][j];
             }
        }
    }
    return mini;
 }
 int main()
 {
     int arr[10][10];

     int m,n,sum=0;
     cout<<"enter the no. of rows"<<endl;
     cin>>m;
     cout<<"enter the no. of column"<<endl;
     cin>>n;
     cout<<"enter the value"<<endl;
     for(int i=0;i<m;i++)
     {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
     }
     cout<<"print the elements"<<endl;
     for(int i=0;i<m;i++)
     {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
            sum=sum+arr[i][j];
        }

        cout<<endl;
     }
     cout<<"enter the sum of all elements"<<endl;
     cout<<sum<<endl;
   int maxvalue=maxValue2d(arr,m ,n);
     cout<<"maximum value in 2D array"<<maxvalue<<endl;
     int minvalue=minValue2d(arr,m,n);
    cout<<"minimuim value in 2D array"<<minvalue;
 }

 */

// Array transpose

/*
 int main()
 {
     int arr[10][10];

     int m,n,sum=0;
     cout<<"enter the no. of rows"<<endl;
     cin>>m;
     cout<<"enter the no. of column"<<endl;
     cin>>n;
     cout<<"enter the elements in array"<<endl;
     for(int i=0;i<m;i++)
     {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
     }
    int tranArr[10][10];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
           tranArr[j][i]=arr[i][j];
        }
    }
    cout<<"Transpose of array"<<endl;
   for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<tranArr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
 }
 */

// 2d vector use in 2d array

int main()
{
    // vector<vector<int>> arr;
    
    // vector<int>a{1,2,3};
    // vector<int>b{4,5,6,7};
    // vector<int>c{8,9,10,11,12};
    // arr.push_back(a);
    // arr.push_back(b);
    // arr.push_back(c);
    
    // for(int i=0;i<arr.size();i++)
    // {
    //     for(int j=0;j<arr[i].size();j++)
    //     {
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    int row=3,col=5;
    vector<vector<int>>arr(row,vector<int>(col,101));
    for(int i=0;i<arr.size();i++)
    {
        for(int j=0;j<arr[i].size();j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}