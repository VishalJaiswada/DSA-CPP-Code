#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

// Buy 1 Lollypop and get 2 free lollypops then min amount required to buy 
// all lollypops
int main(){
    int prices[]={2,8,6,9,4,7};
    int n=6;

     // algo start here 
    sort(prices,prices+n);

    int amount=0;
    int buy=0;
    int free=n-1;

    while(buy <= free){
        amount+=prices[buy];
        buy++;
        free--;
        free--;
    }
    cout<<"Min. Amount to buy all Lollipops: "<<amount<<endl;
    return 0;
}