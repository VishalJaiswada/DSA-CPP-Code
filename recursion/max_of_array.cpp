#include<iostream>
using namespace std;
void find_max(int arr[],int n,int i,int& maxi)
{
    if(i>=n)
    {
        return;
    }
    // 1st case solve karna padega
    // current element ko check karo for max
    if(arr[i]>maxi)
    {
        maxi=arr[i];
    }
    // baki recursion sambhal lega
    find_max(arr,n,i+1,maxi);
}
void find_mini(int arr[],int n,int i,int& mini)
{
    if(i>=n)
    {
        return;
    }
    //1st case solve karna padega, baki recursion sambhal lega
    mini=min(mini,arr[i]);

    find_mini(arr,n,i+1,mini);
}
int main()
{
int arr[8]={5,44,55,22,34,55,99,91};
int n=8;
int i=0;
int maxi=INT32_MIN;
int mini=INT32_MAX;
find_max(arr,n,i,maxi);
cout<<"Maximum number in array: "<<maxi<<endl;
find_mini(arr,n,i,mini);
cout<<"Minimum of array: "<<mini<<endl;
}