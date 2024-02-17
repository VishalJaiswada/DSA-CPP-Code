#include<iostream>
using namespace std;

// Array is always pass by reference because it change the actual value of array
/* void printArray(int Arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<Arr[i]<<" ";
    }
    cout<<endl;
}
void inc(int Arr[],int size)
{
    Arr[0]=Arr[0]+10;
    printArray(Arr,size);
}
int main()
{  
    int Arr[20];
    int size;
    cout<<"Enter the size of array"<<endl;
    cin>>size;
    cout<<"Enter the value in array"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>Arr[i];
    }
    inc(Arr,size);
    printArray(Arr,size);
return 0;
}
*/

// Linear seach in array

/*
bool LinearSearch(int Arr[],int size,int key)
{
    for(int i=0;i<size;i++)
    {
        if(Arr[i]==key)
        return true;
    }
    return false; 
}

int main()
{  
    int Arr[20];
    int size;
    cout<<"Enter the size of array"<<endl;
    cin>>size;
    cout<<"Enter the value in array"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>Arr[i];
    }
    int key;
    cout<<"Enter the element to be search"<<endl;
    cin>>key;
    if(LinearSearch(Arr,size,key))
    {
          cout<<"found the key"<<endl;
    }
    else{
        cout<<"Not found the key";
    }
return 0;
}
*/

// Maximum number in an Array

/*
int maximum(int Arr[],int size)
{
    int maxi=INT64_MIN;
    for(int i=0;i<size;i++)
    {
        if(maxi<Arr[i])
         {
            maxi=Arr[i];
         }
    }
    return maxi;
}

int main()
{  
    int Arr[20];
    int size;
    cout<<"Enter the size of array"<<endl;
    cin>>size;
    cout<<"Enter the value in array"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>Arr[i];
    }
   int maxi=maximum(Arr,size);
   cout<<"Maximum no. in array"<<" "<<maxi;
  
return 0;
}
*/

// extreme Printing No.

/*
int main()
{  
    int Arr[20];
    int size;
    cout<<"Enter the size of array"<<endl;
    cin>>size;
    cout<<"Enter the value in array"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>Arr[i];
    }
    int start=0,end=size-1;
    while(true)
    {
        if(start>end)
        break;
        if(start==end)
        cout<<Arr[start]<<" ";
        else{
            cout<<Arr[start]<<" ";
            cout<<Arr[end]<<" ";
        }
        start++;
        end--;
    }
    // for(int i=0;i<size;i++)
    // {
    //     cout<<Arr[i]<<" ";
    // }
  
return 0;
}

*/

// reverse of given array

int main()
{  
    int Arr[20];
    int size;
    cout<<"Enter the size of array"<<endl;
    cin>>size;
    cout<<"Enter the value in array"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>Arr[i];
    }
   int start=0,end=size-1;
   while(start<=end)
   {
      swap(Arr[start],Arr[end]);
      start++;
      end--;
   }
   for(int i=0;i<size;i++)
   {
    cout<<Arr[i]<<" ";
   }
  
return 0;
}

