#include<iostream>
using namespace std;
void last_Occurance_LR(string& str,char ch,int i,int& ans)
{
    // base case
    if(i>=str.size())
    {
       return;
    }
    // 1st case solve karna hai 
     if(str[i]==ch)
     {
        ans=i;
     }

    //baki recursion sambhal lega
    last_Occurance_LR(str,ch,i+1,ans);
}
void last_Occurance_RL(string& str,char ch,int i,int& ans1)
{
    //base case
    if(i<0)
    {
        return;
    }
    // 1st case solve karna hai
    if(str[i]==ch)
    {
        ans1=i;
        return;
    }
    // baki recursion sambhal lega
    last_Occurance_RL(str,ch,i-1,ans1);
}
int main()
{
 string str;
 cin>>str;
 char ch;
 cin>>ch;
 int ans=-1;
 last_Occurance_LR(str,ch,0,ans);
 cout<<"last occurance at index: "<<ans<<endl;
 int ans1=-1;
 last_Occurance_RL(str,ch,str.size()-1,ans1);
 cout<<"last occurance at index: "<<ans1<<endl;

}