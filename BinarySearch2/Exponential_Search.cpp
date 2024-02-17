#include<iostream>
using namespace std;
// Time Complexity of Exponential search is: T(log(2^(logm-1))) where m is ith value found in exponential_search
int BS(int arr[],int start,int end,int key){
    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return -1;
}
int exponetial_search(int arr[],int n,int key){
   if(arr[0]==key) return 0;
   int i=1;
   while(i<n && arr[i]<=key){
       i=i*2; // i*=2 // i=i<<1
   }
   return BS(arr,i/2,min(i,n-1),key);
}
int main(){
    int arr[]={2,3,4,6,7,8,10,13,15,17,21};
    int n=11;
    int key=21;
    int ans=exponetial_search(arr,n,key);
     if(ans==-1){
        cout<<"Sorry,Key not found !"<<endl;
     }
     else{
        cout<<"Key Found at index: "<<ans;
     }
    return 0;
}