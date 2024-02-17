#include<iostream>
#include<vector>
using namespace std;

// Binary search for integers
/*
int binarySearch(int arr[],int size,int key)
{
    int mid;
    int l=0,h=size-1;
    if(l>h)
    {
        return -1;
    }
    while(l<=h)
    {
        // mid=(l+h)/2; interger overflow issue
        mid=l+(h-l)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]<key)
        {
            l=mid+1;
        }
        else{
            h=mid-1;
        }
    }
    return -1;
}

int main()
{
    int index,n,key;
    int arr[20];
    cout<<"Enter the size of element"<<endl;
    cin>>n;
    cout<<"Enter the element in array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the search elements"<<endl;
    cin>>key;
   index= binarySearch(arr,n,key);

    if(index==-1)
    {
        cout<<"Search Element not found"<<endl;
    }
    else
    {
      cout<<"element found at index"<<" "<<index;
    }

}
*/

// finding first occurrence
int occurance(vector<int>arr,int target)
{
    int s=0,e=arr.size()-1,mid;
    int ans=-1;
    if(s>e)
    {
        return -1;
    }
    while(s<=e)
    {   mid=(s+e)/2;
        if(arr[mid]==target)
        {
            ans=mid;
            e=mid-1;
        }
        else if(arr[mid]<target)
        {
            s=mid+1;
        }
        else if(arr[mid]>target){
            e=mid-1;
        }
    }
    return ans;
}
int main()
{
    vector<int>arr{1,2,3,3,3,4} ;
    int target=3;
    int firstOcc;
    firstOcc=occurance(arr,target);
    cout<<"index of 1st occurance"<<" "<<firstOcc;
}