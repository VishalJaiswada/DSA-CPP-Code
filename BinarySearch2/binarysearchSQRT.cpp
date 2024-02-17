#include<iostream>
using namespace std;
// sqrt by binary search
int find_sqrt(int n)
{
    int target=n;
    int s=0,e=n,mid;
    int ans=-1;
    while(s<=e)
    {
        mid=s+(e-s)/2;
        if(mid*mid==target)
        {
            return mid;
        }
       else if(mid*mid>target)
        {  // left search
            e=mid-1;
        }
        else if(mid*mid<target) 
        {  // store the mid and r
            ans=mid;
            s=mid+1;
        }
    }
    return ans;
}
int main()
{
    int n;
    cout<<"Enter the sqrt of a number"<<endl;
    cin>>n;
    int ans=find_sqrt(n);
    cout<<"Ans is"<<" "<<ans;
}