#include <iostream>
using namespace std;
/* void printName(){
        int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"V&V"<<endl;
    }
}
int main(){
// function call
     printName();
}
*/

// maximum of two number
/*
int max(int a,int b)
{
    if(a>b)
    return a;
    else
    return b;
}
int main()
{
    int a,b;
    cout<<"Enter the value of a"<<endl;
    cin>>a;
    cout<<"Enter the value of b"<<endl;
    cin>>b;
   cout<<"maximum value is:"<<endl;
    cout<<max(a,b);
    return 0;
}
*/

// add two number using function

/*
int sumTwo(int a,int b)
{
   return (a+b);
}
int main()
{
    int num1,num2;
    cout<<"Enter the first number"<<endl;
    cin>>num1;
    cout<<"Enter the second number"<<endl;
    cin>>num2;
    cout<<"sum of two number"<<endl;
    int s=sumTwo(num1,num2);
    cout<<s;
    return 0;
}
*/

// Maximum of Three numbers

/*
int max3(int a,int b,int c)
{
    if(a>b && a>c)
    return a;
    else if(b>c)
    return b;
    else
    return c;
}

int main()
{
    int num1,num2,num3;
    cout<<"Enter the 3 values"<<endl;
    cin>>num1>>num2>>num3;
    cout<<"Max of three"<<endl;
    int max=max3(num1,num2,num3);
    cout<<max;
    return 0;
}
*/

// counting from 1 to n
/*
void printCount(int n)
{
    for(int i=1;i<=n;i++)
    {
        cout<<i<<" ";
    }
}

int main()
{
    int num;
    cout<<"Enter the value of n"<<endl;
    cin>>num;
    printCount(num);
}
*/

// student marks and their grade
/*
char grade(int marks)
{
    if(marks>=90)
    return 'A';
    else if(marks>=80)
    return 'B';
    else if(marks>=70)
    return 'C';
    else if(marks>=60)
    return 'D';
    else if(marks>=33 && marks<60)
    return 'E';
    else
    return 'F';
}
int main()
{  int marks;
    cout<<"Enter the marks of student"<<endl;
    cin>>marks;
    char g=grade(marks);
    cout<<marks<<" "<<g<<endl;
}

*/

// sum of Even no. upto N

/* int sumEven(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sum = sum + i;
        }
    }
    return sum;
}

int main()
{
    int num;
    cout<<"Enter the number"<<endl;
    cin>>num;
    int sume=sumEven(num);
    cout<<"Sum of even no."<<sume<<endl;
}
*/

 
 //set 1th bit
 

// check no. is prime or not ?

/*
bool primeCheck(int n)
{    int c1=1,c2=1;
   for(int i=2;i<n;i++)
   {
      if(n%i==0)
      {
        c2=0;
      }
   }
   return (c1==c2);
}
int main()
{    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    bool p=primeCheck(n);
    cout<<p;
}
*/

//print all prime no. from 1 to n

/* bool printPrime(int n)
{
      int c1=1,c2=1;
   for(int i=2;i<n;i++)
   {
      if(n%i==0)
      {
        c2=0;
      }
   }
   return (c1==c2);
}

int main()
{
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
     for(int i=2;i<=n;i++)
     {
        if(printPrime(i))
        {
            cout<<i<<" ";
        }
     }
     return 0;
}
*/

// reverse an interger
/*
int reverseINT(int n)
{    int m=n;
   int rev=0,r;
   while(m!=0)
   {
      r=m%10;
     rev=rev*10+r;
     m=m/10;
   }
   return rev;
}
int main()
{
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    cout<<"Reverse of a integer is:"<<endl;
    int num=reverseINT(n);
    cout<<num;
    
}
*/

// conver celsius to fahrenheit
float CelsToFahren(int c)
{
    float f;
    f=(c*9.0)/5 +32 ;
    return f;
}

int main()
{
    int c;
    cout<<"Enter the celsius value"<<endl;
    cin>>c;
    float fah=CelsToFahren(c);
    cout<<"fahrenhiet value is:"<<endl;
    cout<<fah;
}
   