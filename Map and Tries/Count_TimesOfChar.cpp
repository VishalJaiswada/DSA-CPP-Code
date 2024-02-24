#include<iostream>
#include<unordered_map>
using namespace std;

// check linked list circular or not
bool checkCircular(Node* head){
    unordered_map<Node*,bool>vis;
    Node* temp=head;
    while(temp!=NULL){
        if(vis.find(temp)!=vis.end()){
             return true; // loop detected , the list is circular
        }
         vis[temp]=true; //Mark current node as visited
         temp=temp->next;
    }
    return false; // no loop is detected, the list node is not circular
}

int main(){

    //counting each characteracter repeatition
     string str="thiruvananthapuram";
     unordered_map<char,int>freq;
     for(int i=0;i<str.length();i++){
        char ch=str[i];
        freq[ch]++;
     }

     for(auto i:freq){
        cout<<i.first<<"-->"<<i.second<<endl;
     }
    return 0;
}