#include<iostream>
#include<vector>
using namespace std;

// index of key is store from pass by reference

void check_key(string& str,int& n,int i,char& key,vector<int>& ans)
{
   if (i>=n)
   { // key not found
    return;
   }
   // first case solve karte hai
    if(str[i]==key)
     {
        ans.push_back(i);
     }
    //baki recursion sambhal lega 
     return check_key(str,n,i+1,key,ans);
}

int main()
{
   string str="Vishal Jaiswada";
   int n=str.length();
   int i=0;
   char key='a';
   vector<int>ans;
   check_key(str,n,i,key,ans);
//  for(auto val:ans)
//  {
//     cout<<val<<" ";
//  }
   for(int i=0;i<ans.size();i++)
   {
      cout<<"Index of key: "<<ans[i]<<endl;
   }
   return 0;
}