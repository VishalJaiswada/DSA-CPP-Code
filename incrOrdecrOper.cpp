#include <iostream>
using namespace std;

int main()
{
    //    int a=12;
    //    cout<<a++ <<endl;
    //    cout<<a;

    //   int b=6;
    //   cout<< ++b<<endl;
    //   cout<< b;

    //    int a=6;
    //    int c= ++a +1;
    //    cout<<c;

    //     int a=6;
    //    int c= (a++) +1;
    //    cout<<c;

    //    int a=3,b=4;
    //    int c= (++a)*(--b);
    //    cout<<c;

    int a = 5;
    // first try to increament all ++a then put value of a
    cout << (++a) * (++a);
    int value;
    cout<<"Enter the no."<<endl;
    cin>>value;
    switch(value)
    {
        case 1: cout<<"Vishal founder of V&V";
        break;
        case 2: cout<<"Shaurya CEO of V&V";
        break;
        case 3: cout<<"Mayank Singh Co-founder of V&V";
        break;
        case 4: cout<<"Prayas Dwivedi M.D. of V&V";
        break;
        case 5: cout<<"Mohit head of employee Of V&V";
        break;
        default: cout<<"Ali Co-founder of V&V";
    }

}