#include<iostream>
#include<vector>
using namespace std;

// Find the unique element in a array
/*
 int findUnique(vector<int>arr)
 {
    int ans=0;
    for(int i=0;i<arr.size();i++)
    {
        ans=(ans)^(arr[i]);
    }
    return ans;
 }
int main()
{
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
     vector<int>arr(n);
     cout<<"Enter the elements"<<endl;
     for(int i=0;i<arr.size();i++)
     {
        cin>>arr[i];
     }
     int uniqueElem=findUnique(arr);
     cout<<"Unique Element is"<<" "<<uniqueElem;
    return 0;
}
*/

// Find the union of two array without duplicate
/*
 int main()
{
    int arr[]={1,3,5,7,9};
    int sizea=5;
    int brr[]={2,4,6,8};
    int sizeb=4;
    vector<int>ans;
    for(int i=0;i<sizea;i++)
    {
        ans.push_back(arr[i]);
    }
     for(int i=0;i<sizeb;i++)
    {
        ans.push_back(brr[i]);
    }
    cout<<"Union of two set"<<endl;
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}
*/

//intersection of two set of two array
/*
 int main()
{
    int arr[]={1,3,3,3,5,7,9};
    int sizea=7;
    int brr[]={3,3,5,7};
    int sizeb=4;
   
    vector<int>ans;
    for(int i=0;i<sizea;i++)
    {
       int element=arr[i];
       for(int j=0;j<sizeb;j++)
       {
        if(element==brr[j])
          { //mark the element
            brr[j]=INT64_MIN;
            ans.push_back(element);
          }
       }
    }
     
    cout<<"Intersection of two set"<<endl;
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}
*/

// Find the union of two array with duplicate
/*
 int main()
{
    int arr[]={1,3,5,7,9};
    int sizea=5;
    int brr[]={2,3,10,7};
    int sizeb=4;
    vector<int>ans;

    for(int i=0;i<sizea;i++)
    {
        ans.push_back(arr[i]);
    }
     for(int i=0;i<sizea;i++)
    {  int value=arr[i];
        for(int j=0;j<sizeb;j++)
        {
            if(value==brr[j])
            {
                
                value=INT64_MIN;
            }
            else if(value!=INT64_MIN)
            {
               ans.push_back(value);
            }
        }
    }
    
    
    cout<<"Union of two set"<<endl;
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}
*/

// print all pairs of array and sum==pairs
/*
int main()
{
    vector<int>arr{1,2,3,4,5};
    int sum=7;
    for(int i=0;i<arr.size();i++)
    {
        int element=arr[i];
        for(int j=i+1;j<arr.size();j++)
        {  
            if(element+arr[j]==sum)
            cout<<"("<<element<<","<<arr[j]<<")"<<endl;
        }
    }
    return 0;
}
*/
// find the triplet of the pairs

/*
int main()
{
    vector<int>arr{1,2,3,4,5,6};
    int sum=10;
    for(int i=0;i<arr.size();i++)
    {
        int element=arr[i];
        for(int j=i+1;j<arr.size();j++)
        {  
             int value =arr[j];
             for(int k=j+1;k<arr.size();k++)
             {
                if(element+value+arr[k]==sum)
                {
                    cout<<"("<<element<<","<<value<<","<<arr[k]<<")"<<endl;
                }
             }
        }
    }
    return 0;
}
*/

// Sort 0's and 1's.......
int main()
{  // using double pointer approach...
    vector<int>arr{0,1,0,1,0,1,0,0,1,1,0,1,0} ;
    int start=0;
    int end=arr.size()-1;
    int i=0;
    while(i!=end) //while(start<end)
    {
        if(arr[i]==0)
        {
            swap(arr[i],arr[start]);
            start++;
            i++;
        }
        if(arr[i]==1)
        {
            swap(arr[i],arr[end]);
            
            end--;
        }
    }
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}