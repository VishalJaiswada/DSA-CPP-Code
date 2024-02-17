#include <iostream>
using namespace std;
int quoteint(int dividend, int divisor)
{
    int s = 0, end = abs(dividend), mid;
    int ans;
    while (s <= end)
    {
        mid = s + (end - s) / 2;
        if (abs(mid * divisor) == abs(dividend))
           {
             ans=mid;
             break;
           }
            
        // absolute is used for -ve sign
        if (abs(mid * divisor) > abs(dividend))
            end = mid - 1; // left search
        else if (abs(mid * divisor) <= abs(dividend))
        {
            // store answer
            ans = mid;
            // right search
            s = mid + 1;
        }
    }
    if ((dividend < 0 && divisor < 0) || (dividend > 0 && divisor > 0))
        return ans;
    else  
    {
        return (-ans);
    }
}
int main()
{
    int dividend, divisor;
    cout << "Enter the value of divident and divisor" << endl;
    cin >> dividend >> divisor;

    int ans = quoteint(dividend, divisor);
    cout << "Ans is"
         << " " << ans;
}