#include<iostream>
#include<vector>
#include<algorithm>
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
    // reverse a strings
    char ch[100];
    cout<<"Enter the strings"<<endl;
    cin>>ch;
    int i=0,j=get_length(ch)-1;
     
    // reverse the strings
    while(i<=j)
    {
        swap(ch[i],ch[j]);
        i++;
        j--;
    }

    cout<<"After reverse"<<" "<<ch<<endl;
    return 0;
}