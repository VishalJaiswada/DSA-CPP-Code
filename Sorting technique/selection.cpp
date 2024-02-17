#include<iostream>
#include<vector>
using namespace std;
int main()
{ 
   vector<int>arr{4,5,3,1,7,6};
   int n=arr.size();
   // selection sort 
   for(int i=0;i<n-1;i++)
   {
      int minindex = i;
      for(int j=i+1;j<n;j++)
      {
          if(arr[j]<arr[minindex])
           minindex=j;
      }
      swap(arr[i],arr[minindex]);
   }
   //printing sort elements
   for(int i=0;i<n;i++)
   {
    cout<<arr[i]<<" ";
   }
}  