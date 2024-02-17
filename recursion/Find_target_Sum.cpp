#include<iostream>
#include<vector>
using namespace std;
// Finding the minimum number of element to reach target 
int solve(vector<int>&arr,int target)
{
    if(target==0)
    return 0;
    if(target<0)
    return INT32_MAX;
    int mini=INT32_MAX;

    for(int i=0;i<arr.size();i++)
    {
        int ans=solve(arr,target-arr[i]);
        if(ans!=INT32_MAX)
        {
            mini=min(mini,ans+1);
        }
    }
    return mini;
}
int main()
{
    vector<int>arr{1,2,4};
    int target=11;
    int min_coin=solve(arr,target);
    cout<<"minimum number of element to reach target sum"<<endl<<min_coin<<endl;

}