#include<iostream>
using namespace std;
int arr_Value_Sum(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}
int main(){
    int arr[100];
    int n;
    cout<<"Enter the size of arr: "<<endl;
    cin>>n;
    cout<<"Enter the value of array: "<<endl;
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }

    int ArraySum=arr_Value_Sum(arr,n);
    cout<<"Sum of Array:"<<ArraySum<<endl;
    return 0;

}