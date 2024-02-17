#include<iostream>
#include<vector>
#include<stack>
using namespace std;
vector<int>nextSmallerElem(vector<int>&input){
    stack<int>st;
    st.push(-1);

    vector<int>ans(input.size());

    for(int i=input.size()-1;i>=0;i--){
        int curr=input[i];
        while(st.top()!=-1 && curr<=input[st.top()]){
            //pop karo jab tak chhota element na mil jaye stack me
            st.pop();
        }
        // chhota element mil chuka hai , ise store kar lo
        ans[i]=st.top();
        
        //ab push kar do curr ko
        st.push(i);
    }
return ans;
}
vector<int>prevSmallerElem(vector<int>&input){
    stack<int>st;
    st.push(-1);

    vector<int>ans(input.size());

    for(int i=0;i<input.size();i++){
        int curr=input[i];
        while(st.top()!=-1 && curr<=input[st.top()]){
            //pop karo jab tak chhota element na mil jaye stack me
            st.pop();
        }
        // chhota element mil chuka hai , ise store kar lo
        ans[i]=st.top();
        
        //ab push kar do curr ko
        st.push(i);
    }
return ans;
}
int maxAreaFromHistogram(vector<int>&input){
   int maxArea=INT32_MIN;
   // step1: for storing the index of next smaller element
   vector<int>next=nextSmallerElem(input);
   // step2: for storing the index of prev smaller element
   vector<int>prev=prevSmallerElem(input);
    
   for(int i=0;i<input.size();i++){
         int len=input[i];
         int width=next[i]-prev[i]-1;
         int area=len*width;
         maxArea=max(maxArea,area);
   }
return maxArea;
}
int main(){
    vector<int>input;
    input.push_back(2);
    input.push_back(1); 
    input.push_back(5);
    input.push_back(6);
    input.push_back(2);
    input.push_back(3);

   int getMaxArea=maxAreaFromHistogram(input);

   cout<<"max Area from Histrogram: "<<getMaxArea;
   
return 0;
}