#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> arr;
    int ans=(sizeof(arr)/sizeof(int ));
    cout<<ans<<endl;
    cout<<arr.size()<<endl;
    cout<<arr.capacity()<<endl;
    // insert the elemebnt
    arr.push_back(5);
    arr.push_back(9);
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // remove the element
    arr.pop_back();
     for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    vector<int> brr(10);
    cout<<"Size of b"<<" "<<brr.size()<<endl;
    cout<<"Capacity of brr"<<" "<<brr.capacity()<<endl;

    // initialisation of vector with -1 in all block
    /*
     vector<int> crr(10,-1);
    for(int i=0;i<crr.size();i++)
    {
        cout<<crr[i]<<" ";
    }
    */
     int n;
     cout<<"Enter the size"<<endl;
     cin>>n;
      vector<int> crr(n,-505);
    for(int i=0;i<crr.size();i++)
    {
        cout<<crr[i]<<" ";
    }
    cout<<endl;
    // print inserted value in vector
    vector<int>drr{44,55,66 ,77};
    for(int i=0;i<drr.size();i++)
    {
        cout<<drr[i]<<" ";
    }
    return 0;   
}
