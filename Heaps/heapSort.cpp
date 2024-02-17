#include <iostream>
using namespace std;

// heapify function
void heapify(int arr[], int n, int i)
{
    int index = i;
    int leftIndex = 2 * i;
    int rightIndex = 2 * i + 1;

    int largest = index;

    if (leftIndex <= n && arr[largest] < arr[leftIndex])
    {
        largest = leftIndex;
    }

    if (rightIndex <= n && arr[largest] < arr[rightIndex])
    {
        largest = rightIndex;
    }

    if (index!=largest)
    {
        swap(arr[index] , arr[largest]);
        index = largest;
        // recursive call
        heapify(arr, n, index);
    }
}

// build heap function
void buildHeap(int arr[],int n){

    for(int i=n/2;i>0;i--){
        heapify(arr,n,i);
    }       
}

// heap sort function
void heapSort(int arr[],int n){
    int index=n;

    while(n!=1){
        swap(arr[1],arr[n]);
        n--;

        //heapify
        heapify(arr,n,1);
    }
}
int main()
{

    int arr[] = {-1, 12, 56,43,6,78,87,5,44,3,23,32};
    int n = 11;
    
    buildHeap(arr,n);

    cout<<"Printing the heap: "<<endl;
    for(int i=0;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    heapSort(arr,n);
    
    cout<<"Printing the sorted heap: "<<endl;
    for(int i=0;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}