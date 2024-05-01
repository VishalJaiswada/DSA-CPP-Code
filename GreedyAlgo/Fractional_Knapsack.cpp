#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int>a,pair<int,int>b) {
    double ratio1=(1.0*a.first)/a.second;
    double ratio2=(1.0*b.first)/b.second;
    return ratio1>ratio2;
}
int main(){
    int value[]={60,100,120};
    int weight[]={10,20,30};
    int n=3;
    int capacity=50;

    vector<pair<int,int>>data;

    for(int i=0;i<n;i++){
        data.push_back(make_pair(value[i],weight[i]));
    }

    sort(data.begin(),data.end(),cmp);
     
     // check each items k entire item lelu ya fraction lu
    //  double ans=0.0;
    //  for(int i=0;i<n;i++){
    //      if(data[i].second <= capacity){
    //          ans+=data[i].first;
    //          capacity-=data[i].second;
    //      }
    //      else{
    //          ans+=data[i].first*(1.0*capacity/data[i].second);
    //          break;
    //      }
    //  }
    //  cout<<ans<<endl;
    
    double totalValue = 0.0;
    for(int i=0;i<n;i++){
        pair<int,int>item=data[i];
        int itemValue=data[i].first;
        int itemWeight=data[i].second;;

        if(itemWeight <= capacity){
            totalValue+=itemValue;
            capacity-=itemWeight;
        }
        else{
            // when fraction value will come
            totalValue+=((1.0)*itemValue/itemWeight)*capacity;
            capacity=0;
        }
    }
    cout<<"Total value: "<<totalValue<<endl;
    return 0;
}