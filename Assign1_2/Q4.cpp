#include <iostream>
using namespace std;
// printing Hollow Inverted Half pyramid pattern
int main()
{
    cout << "Enter the value of n: " << endl;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i==0 || j==0 || i+j==n-1)
            {  // condition j=n-i-1
                cout <<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout << endl;
    }
    return 0;
}