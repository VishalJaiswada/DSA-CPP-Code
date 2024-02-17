#include<iostream>
#include<vector>
using namespace std;
// printing subarray from given array
void printSubarray_util(vector<int>&arr,int start,int end)
{
    // base case
    if(end>=arr.size())
    {
        return;
    }
    //1st case solve karna hai
    for(int i=start;i<=end;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //baki recursion sambhal lega
    printSubarray_util(arr,start,end+1);
}
void print_subarray(vector<int>&arr){
    for(int start=0;start<arr.size();start++)
    {
        int end=start;
        printSubarray_util(arr,start,end);
    }
}
int main()
{
    vector<int>arr{1,2,3,4,5};
    // printing subarray
    print_subarray(arr);
}