#include<iostream>
using namespace std;
void print(int arr[],int n,int i)
{
    //base case
    if(i>=n){
        return;
    }
    // 1st case solve kardiya
    cout<<arr[i]<<" ";
    // baki recursion sambhal lega
    print(arr,n,i+1);
}
int main()
{
   int arr[5]={5,10,15,20,25};
   int n=5;
   int i=0;
   print(arr,n,i);
}