#include<iostream>
#include<vector>
using namespace std;
// Insertion sort
int main()
{
    vector<int>arr{10,1,7,6,14,9};
    int n=arr.size();
    for(int round=1;round<n;round++)
    {  
        // step A: fetch the value
        int value=arr[round];
        // step B: comparision
        int j;
        for(j=round-1;j>=0;j--)
        {
            if(arr[j]>value)
            {  // step C: shift the value
               arr[j+1]=arr[j];
            }
            else{ // ruk jana hai
                break;
            }
            
        }
        // step D:copy the value at right position
        arr[j+1]=value;
    }

    // printing the array
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}