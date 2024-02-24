#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    
    // creation 
    unordered_map<string,int>m;

    //insertion 
    pair<string,int> p=make_pair("Fortuner",4000000);
    m.insert(p);
    
    //another way to create pair
    pair<string,int>p2("Thar",1500000);
    m.insert(p2);

    // another way
     m["Scorpio"]=2000000;
    
    //access
    cout<<"Scorpio price:"<<m.at("Scorpio")<<endl;
    // cout<<"Fortuner price:"<<m.at("Fortuner")<<endl;
    cout<<"Thar price:"<<m.at("Thar")<<endl;
    
    // another way to access
        cout<<"Fortuner price:"<<m["Fortuner"]<<endl;
    
    // serach a particular key by count
    cout<<m.count("Bolero")<<endl;

    // another way for search
    if(m.find("Fortuner")!=m.end()){
        cout<<"Fortuner Found"<<endl;
    }
    else{
        cout<<"Fortuner Not Found"<<endl;
    }

    // printing size of unordered map
    cout<<"Size of Map:"<<m.size()<<endl;
    cout<<m["Nexon"]<<endl;
    cout<<"Size of Map:"<<m.size()<<endl;

    // printing all entries
    cout<<"Printing all entries"<<endl;
    for(auto i: m){
        cout<<i.first<<"-->"<<i.second<<endl;    }
    return 0;
}