#include<iostream>
using namespace std;
// mergeSort will be used to devide the array and merge will be used to conqure the array
void merge(int* arr,int s,int e)
{
    int mid=s+(e-s)/2;
    int l1=mid-s+1;
    int l2=e-mid;
    int *left=new int[l1];
    int *right=new int[l2];
    int k1=s;
    for(int i=0;i<l1;i++)
    {
       left[i]=arr[k1];
       k1++;
    }
    int k2=mid+1;
    for(int i=0;i<l2;i++)
    {
        right[i]=arr[k2];
        k2++;
    }
    // now going to merge left and right array
    int li=0,ri=0,ki=s;
    while(li<l1 && ri<l2)
    {
        if(left[li]<right[ri])
        {
            arr[ki]=left[li];
            li++;
            ki++;
        }
        else{
            arr[ki]=right[ri];
            ri++;
            ki++;
        }
    }
    while(li<l1)
    {
        arr[ki]=left[li];
            li++;
            ki++;
    }
    while(ri<l2)
    {
         arr[ki]=right[ri];
            ri++;
            ki++;
    }
}
void mergeSort(int*arr,int s,int e)
{   
    // base case
    if(s>=e)
    {
        return;
    }
    int mid=s+(e-s)/2;
    //left array sort using recursion
    mergeSort(arr,s,mid);
    // right array sort using recursion
    mergeSort(arr,mid+1,e);
    // call merge to add to sorted array
    merge(arr,s,e);
}
int main()
{
   int arr[]={3,9,1,4,2,8,33,99,22,2,2};
   int n=11;
   int s=0;
   int e=n-1;
   mergeSort(arr,s,e);
   for(int i=0;i<n;i++)
   {
    cout<<arr[i]<<endl;
   }
   return 0;
}