#include<iostream>
#include<vector>
using namespace std;
int main()
{
    char ch[100];
    cout<<"Enter your name";
    // cin>>ch;
    /* 
    cout<<"Your Name:"<<ch<<"hai"<<endl;
     for(int i=0;i<13;i++)
     {
        cout<<"index:"<<i<<"value is:"<<ch[i]<<endl;
     }
    */
     cin.getline(ch,50);
    cout<<ch;
}