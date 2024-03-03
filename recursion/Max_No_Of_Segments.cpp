#include<iostream>
#include<limits.h>
using namespace std;
//problems --> cut into segments and find maximum no. of segments
int solve(int n, int x,int y ,int z){
    // base case
    if(n==0){
        return 0;
    }
    if(n<0){
        return INT_MIN;
    }
    int ans1=solve(n-x,x,y,z)+1;
    int ans2=solve(n-y,x,y,z)+1;
    int ans3=solve(n-z,x,y,z)+1;
  int ans= max(ans1,max(ans2,ans3));
  return ans;
}
int main(){
    int n=8; // length of rods
    int x=2;
    int y=5;
    int z=3;

    //solve function --> return maximum number of segments
    int ans=solve(n,x,y,z);
    // ans-> valid or invalid
    if(ans<0){
        // invalid ans
        ans=0;
    }
    cout<<"Answer is: "<<ans <<endl;
    return 0;
}