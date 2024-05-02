#include<bits/stdc++.h>
using namespace std;

int main(){
   int n=8; // number of packets
   int m=5; // number of students

   int arr[]={3,4,1,9,56,7,9,12}; // number of chocolates in a packet
   
   //sort kar do
   sort(arr,arr+n);
   
   // check difference in m-size window
   int i=0;
   int j=m-1;
   int diff=INT_MAX;
   while (j<n) {
       int newDiff=arr[j]-arr[i];
       diff=min(diff,newDiff);
       
       j++;
       i++;
   }
   cout<<"Answer is: "<<diff<<endl;

   return 0;
}