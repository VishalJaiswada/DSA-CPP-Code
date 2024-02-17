#include<iostream>
using namespace std;
int partition(int arr[],int s,int e)
{
    int pivotIndex=s;
    int pivotElement=arr[s];
    //step 1: create count to place the right place of pivotElement
    int count=0;
    for(int i=s+1;i<=e;i++)
    {
        if(arr[i]<=pivotElement)
        {
            count++;
        }
    }
    // step 2:swap the pivotElement at right position
    swap(arr[pivotIndex],arr[s+count]);
    pivotIndex=s+count;
    // step 3: left me chhote aur right me bade value at pivotIndex
     int i=s;
     int j=e;
     while(i<pivotIndex && j>pivotIndex)
     {
        while(arr[i]<=pivotElement){
            i++;
        }
        while(arr[j]>pivotElement){
            j--;
        }
        // 2 case ho sakte hai ->
        //A-> you find the element to swap
        //B-> no need to swap
         if(i<pivotIndex && j>pivotIndex){
             swap(arr[i],arr[j]);
         }
     } 
     return pivotIndex;    
}
void quickSort(int arr[],int s,int e)
{
    // base case
    if(s>=e) return;
    //1st case solution ke liye
    int p=partition(arr,s,e);
    // we call recursion for two times
    // left partition
    quickSort(arr,s,p-1);
    //right partion
    quickSort(arr,p+1,e); 
}
int main()
{
  int arr[]={8,8,8,3,2,4,4,4,30,20,20,20,20,20,50};
  int n=15;
  int s=0;
  int e=n-1;
  quickSort(arr,s,e);
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  return 0;
}