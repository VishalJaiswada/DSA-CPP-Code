#include<iostream>
#include<vector>
using namespace std;

// Problem : Painting Fences

//Method 1: Using Recursion Method
int solveByRec(int n,int k){
     // base case
     if(n==1){
        return k; 
     }
     if(n==2){
        return (k+k*(k-1)); // return k*k ;
     }

     int ans=(solveByRec(n-1,k)+solveByRec(n-2,k))*(k-1);
     return ans;
}

//Method 2: Using Top-Down Approach--> Memoisation
int solveBymem(int n,int k,vector<int>& dp){
    // base case
     if(n==1){
        return k; 
     }
     if(n==2){
        return (k+k*(k-1)); // return k*k ;
     }
    if(dp[n]!=-1){
        return dp[n];
    }
     dp[n]=(solveBymem(n-1,k,dp)+solveBymem(n-2,k,dp))*(k-1);
     return dp[n];
}

// Method 3: Using Bottom-Up Approach --> Tabulation method
int solveByTab(int n,int k){
   vector<int>dp(n+1,0);
   dp[1]=k;
   dp[2]=(k+k*(k-1));

   for(int i=3;i<=n;i++){
    dp[i]=(dp[i-1]+dp[i-2])*(k-1); 
   }
   return dp[n];
}

// Method 4: Using Space Optimization Method
int solveBySO(int n,int k){
       
   int prev2=k;
   int prev1=(k+k*(k-1));
   int curr;
   for(int i=3;i<=n;i++){
    curr=(prev1+prev2)*(k-1);
    prev2=prev1;
    prev1=curr; 
   }
   return prev1; // return curr;
}
int main(){
    int n=4;
    int k=3;
    //Method1: solve By recursion Method
    // int ans=solveByRec(n,k);
    // cout<<"Ans: "<<ans<<endl;

    // method 2: solve By Top-Down Approach 
    /*  vector<int>dp(n+1,-1);
    int ans=solveBymem(n,k,dp);
    cout<<"Answer: "<<ans<<endl;
    */

   // Method 3: solve by tabulation Method
   /*
    int ans=solveByTab(n,k);
    cout<<"Answer: "<<ans<<endl;
    */

   // Method 4: solve by space optimization method
   int ans=solveBySO(n,k);
   cout<<"Answer is:"<<ans<<endl;
   return 0;
}