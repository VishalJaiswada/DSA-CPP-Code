#include<iostream>
#include<vector>
using namespace std;
int get_length(char ch[])
{
    int length=0;
    int i=0;
    while(ch[i]!='\0')
    {
             length++;
             i++;
    }
    return length;
}
int main()
{
    char ch[100];
    cout<<"Enter your name";
    cin>>ch;
    cout<<"length is: "<<get_length(ch)<<endl;
}