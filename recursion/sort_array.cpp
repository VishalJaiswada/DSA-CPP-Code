#include<iostream>
#include<vector>
using namespace std;
// checking array is sorted or not
bool check_sorted(vector<int>& arr,int& n,int i)
{
    // base case ka solution
    if(i==n-1)
    {
        return true;
    }
    // 1st case solve kardo
    if (arr[i+1]<arr[i])
    {
        return false;
    }
    // baki recursion sambhal lega
    return check_sorted(arr,n,i+1);
}
int main()
{
   vector<int>arr{11,33,44,55,77,99};
   int i=0;
   int n=arr.size();
   bool issorted=check_sorted(arr,n,i);
   if(issorted)
   {
    cout<<"array is sorted "<<endl;
   }
   else{
    cout<<"array is not sorted"<<endl;
   }
   
}