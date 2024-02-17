#include<iostream>
using namespace std;
void reverse_String(string& str,int start,int end)
{
    // base case
    if(start>=end)
    {
       return;
    }
    // 1st case solve karna hai
    swap(str[start],str[end]);
    //baki recursion sambhal lega
    reverse_String(str,start+1,end-1);
}
int main()
{
    string str;
    cout<<"Enter the string:"<<endl;
    cin>>str;
    reverse_String(str,0,str.size()-1);
    cout<<"Revrse of string: "<<str<<endl;
}