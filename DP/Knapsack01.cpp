#include<iostream>
#include<vector>
using namespace std;
// 0/1 knapsack Problem

int solveByRec(int weight[],int value[],int index,int capacity){
    // here n=index of last element

    // base case --> only 1 item
    if(index==0){
        if(weight[0]<=capacity){
            return value[0];
        }
        else{
            return 0; 
        }
    }
    // include
    int include=0;
    if(weight[index]<=capacity){
      include= value[index]+solveByRec(weight,value,index-1,capacity-weight[index]);
    }
    // exlude
    int exclude= 0+solveByRec(weight,value,index-1,capacity); 
    
    int ans=max(include,exclude);
    return ans;
}

// method 2: using dp Top Down Approach, Memoisation method
int getMaxValueofKnapsack(int weight[],int value[],int index,int capacity,vector<vector<int>>&dp){
      // here n=index of last element
    // base case --> only 1 item
    if(index==0){
        if(weight[0]<=capacity){
            return value[0];
        }
        else{
            return 0; 
        }
    }
    if(dp[index][capacity]!=-1){
        return dp[index][capacity];
    }
    // include
    int include=0;
    if(weight[index]<=capacity){
      include= value[index]+getMaxValueofKnapsack(weight,value,index-1,capacity-weight[index],dp);
    }
    // exlude
    int exclude= 0+getMaxValueofKnapsack(weight,value,index-1,capacity,dp); 
    
    dp[index][capacity]=max(include,exclude);
    return dp[index][capacity];
}

// Method 3: Using tabulation Method
int getMaxValueofKnapsackByTabulation(int weight[],int value[],int n,int capacity){
          // base case --> only 1 item
    vector<vector<int>>dp(n,vector<int>(capacity+1,0));
     
    for(int w=weight[0];w<=capacity;w++){
        if(weight[0]<=capacity){
            dp[0][w] =value[0];
        }
        else{
             dp[0][w]=0;
        }
    }
    
    for(int index=1;index<n;index++){
        for(int wt=0;wt<=capacity;wt++){
            // include
            int include=0;
            if(weight[index]<=wt){
            include= value[index]+dp[index-1][wt-weight[index]];
            }
            // exlude
            int exclude= 0+dp[index-1][wt]; 

            dp[index][wt]=max(include,exclude);
        }
    }
   
    
    return dp[n-1][capacity];
}
// Method 4: Using Space Optimization
int getMaxValueofKnapsackBySO(int weight[],int value[],int n,int capacity){
    
    // we have to make two one D array
    vector<int>prev(capacity+1,0);
    vector<int>curr(capacity+1,0);

    for(int w=weight[0];w<=capacity;w++){
        if(weight[0]<=capacity){
            prev[w] =value[0];
        }
        else{
             prev[w]=0;
        }
    }
    
    for(int index=1;index<n;index++){
        for(int wt=0;wt<=capacity;wt++){
            // include
            int include=0;
            if(weight[index]<=wt){
            include= value[index]+prev[wt-weight[index]];
            }
            // exlude
            int exclude= 0+prev[wt]; 

            curr[wt]=max(include,exclude);
            
        }
         // shift
            prev=curr;
    }
   
    
    return prev[capacity];
}
// Method 5: only use one D array in Space Optimization
 
int getMaxValueofKnapsackBySO2(int weight[],int value[],int n,int capacity){
    
    // we have to make  one D array
   // vector<int>prev(capacity+1,0);
    vector<int>curr(capacity+1,0);

    for(int w=weight[0];w<=capacity;w++){
        if(weight[0]<=capacity){
            curr[w] =value[0];
        }
        else{
             curr[w]=0;
        }
    }
    
    for(int index=1;index<n;index++){
        for(int wt=capacity;wt>=0;wt--){
            // include
            int include=0;
            if(weight[index]<=wt){
            include= value[index]+curr[wt-weight[index]];
            }
            // exlude
            int exclude= 0+curr[wt]; 

            curr[wt]=max(include,exclude);
            
        }
         
    }
   
    
    return curr[capacity];
}
int main(){
    int weight[]={4,5,1};
    int value[]={1,2,3};
    int n=3;
    int capacity=4;

    //Method 1: int ans=solveByRec(weight,value,n-1,capacity);
   
   // Method 2: By Top Down Approach
   /*   vector<vector<int>>dp(n,vector<int>(capacity+1,-1));
    int ans=getMaxValueofKnapsack(weight,value,n-1,capacity,dp);
    cout<<"Answer is: "<<ans<<endl;
   */

   // Method 3: By Bottom Up Approach
  //  int ans=getMaxValueofKnapsackByTabulation(weight,value,n,capacity);
  //  cout<<"Answer is: "<<ans<<endl;

  // Method 4: By Space Optimization Approach
  // int ans=getMaxValueofKnapsackBySO(weight,value,n,capacity);
  // cout<<"Answer is: "<<ans<<endl;

  // Method 5: By Space Optimization Approach
  int ans=getMaxValueofKnapsackBySO2(weight,value,n,capacity);
  cout<<"Answer is: "<<ans<<endl;
    return 0;
}