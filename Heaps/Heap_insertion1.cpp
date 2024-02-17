#include <iostream>
using namespace std;

class Heap
{
public:
    int arr[101];
    int size;

    Heap()
    {
        size = 0;
    }

    void insert(int val)
    {
        // value insert karo end me
        if(size==0){
            arr[size]=-1;
        }
        size = size + 1;
        int index = size;
        arr[index] = val;

        // is val ko sahi position par le jao
        while (index > 1)
        {
            int parentIndex = index / 2;

            if (arr[index] > arr[parentIndex])
            {
                swap(arr[index], arr[parentIndex]);
                index = parentIndex;
            }
            else
            {
                break;
            }
        }
    }

    int deletion(){
        int ans=arr[1];
        // replace root node data with last node data
        arr[1]=arr[size];
        size--;

        //place root node data on its correct position
        int index=1;
        while(index<size){
            int left=2*index;
            int right=2*index+1;

            int largest=index;
            if(left<size && arr[largest]< arr[left]){
                largest=left;
            }
            if(right<size && arr[largest]<arr[right]){
                largest=right;
            }

            if(largest==index){
                //value is at correct position
                break;
            }
            else{
                swap(arr[index],arr[largest]);
                index=largest;
            }
        }
        return ans;
    }
};

int main()
{
    
    Heap h;
    // h.arr[0]=-1;
    // h.arr[1]=100;
    // h.arr[2]=50;
    // h.arr[3]=60;
    // h.arr[4]=30;
    // h.arr[5]=40;
    // h.arr[6]=45;
    // h.arr[7]=55;
    // h.arr[8]=10;
    // h.arr[9]=20;

    // h.size=9;
     
     h.insert(50);
     h.insert(30);
     h.insert(70);
     h.insert(40);
     h.insert(80);
     h.insert(100);

    cout<<" Insertion of key in Heap: "<<endl;
    for(int i=0;i<=h.size;i++){
        cout<<h.arr[i]<<" ";
    }
    cout<<endl;
    
    int deleVal=h.deletion();
    cout<<"Delete value is: "<<deleVal<<endl;
    cout<<"After deletion of key in Heap: "<<endl;
    for(int i=0;i<=h.size;i++){
        cout<<h.arr[i]<<" ";
    }
    // cout<<"After Insertion of key: "<<endl;
    // h.insert(57);
    // for(int i=0;i<=h.size;i++){
    //     cout<<h.arr[i]<<" ";
    // }

    return 0;
}