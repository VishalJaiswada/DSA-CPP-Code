#include<iostream>
#include<queue>

using namespace std;
// find kth greatest element
int getKthGreatestElement(int arr[],int n,int k){
    //create min heap
    priority_queue<int,vector<int>,greater<int>>pq;
    //insert initial k element of array
    for(int i=0;i<k;i++){
        pq.push(arr[i]);
    }
    // for remaining elements, push only if they are greater than top element
    for(int i=k;i<n;i++){
        int element=arr[i];
        if(element > pq.top()){
            pq.pop();
            pq.push(element);
        }
    }
    int ans=pq.top();

    return ans;   
}
//find kth smallest element
int getKthSmallestElement(int arr[],int n,int k){
    //create max heap
    priority_queue<int>pq;
    //insert initial k element of array
    for(int i=0;i<k;i++){
        pq.push(arr[i]);
    }
    // for remaining elements, push only if they are less than top
    for(int i=k;i<n;i++){
        int element=arr[i];
        if(element<pq.top()){
            pq.pop();
            pq.push(element);
        }
    }
    int ans=pq.top();

    return ans;
}
int main(){
    int arr[]={10,5,20,4,15};
    int n=5;
    int k=4; 
    int ans=getKthSmallestElement(arr,n,k);
    cout<<"Kth Smallest element is: "<<ans<<endl;
    int ans1=getKthGreatestElement(arr,n,k);
    cout<<"Kth Greatest element is: "<<ans1<<endl;
    return 0;
}