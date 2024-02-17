#include<iostream>
#include<vector>
using namespace std;
int Binary_search(vector<int>&arr,int s,int e,int target)
{
    // base case
    if(s>e){
        return -1;
    }
    int mid =s +(e-s)/2;
    // first case of recursion
    if(arr[mid]==target)
    {
         return mid;
    }
    // 2nd case:- arr[mid]<key
    if(arr[mid]<target)
    {
        return Binary_search(arr,mid+1,e,target);
    }
    else
    {
        return Binary_search(arr,s,mid-1,target);
    }
}
int main()
{
  vector<int>arr{5,10,20,30,45,60,70,88,90,99};
  int s=0;
  int e=arr.size();
  int target=88;
  int ans=Binary_search(arr,s,e,target);
  cout<<"index of target is: "<<ans<<endl;
}