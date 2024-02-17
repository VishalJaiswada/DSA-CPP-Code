#include <iostream>
#include <vector>
#include <string.h>
#include <algorithm>
using namespace std;

 

int main()
{
    // create strings
    string str;
    //input
    cout << "Enter the strings" << endl;
    // cin>>str;
    getline(cin,str);
    cout << str<<endl;
    cout<<str.substr(0,7)<<endl;

    //compare the string
    string a="vishal";
    string b="vishal";
    if(a.compare(b)==0)
    {
        cout<<"a and b are exactly same";
    }
    else{
        cout<<"not same";
    }
    return 0;
}