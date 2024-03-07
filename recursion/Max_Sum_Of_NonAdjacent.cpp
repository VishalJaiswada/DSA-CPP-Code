#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
using namespace std;
// problem--> Maximum Sum of Non-Adjacent Element
void solve(vector<int>&arr,int i,int sum,int &maxi){
    // base case
    if(i>=arr.size()){
        // update maxi
         maxi=max(maxi,sum);
        return;
    }
    // include --> i=i+2
    solve(arr,i+2,sum+arr[i],maxi);
    // exclude case--> i=i+1
    solve(arr,i+1,sum,maxi);
}
int main(){
    vector<int>arr{2,1,4,9};
    int sum=0;
    int maxi=INT32_MIN;
    int i=0;
    solve(arr,i,sum,maxi);

    cout<<"Maximum Sum: "<<maxi<<endl;
    return 0;
}