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
        while(curr<=st.top()){
            //pop karo jab tak chhota element na mil jaye stack me
            st.pop();
        }
        // chhota element mil chuka hai , ise store kar lo
        ans[i]=st.top();
        
        //ab push kar do curr ko
        st.push(curr);
    }
return ans;
}
vector<int>prevSmallerElem(vector<int>&input){
    stack<int>st;
    st.push(-1);

    vector<int>ans(input.size());

    for(int i=0;i<input.size();i++){
        int curr=input[i];
        while(curr<=st.top()){
            //pop karo jab tak chhota element na mil jaye stack me
            st.pop();
        }
        // chhota element mil chuka hai , ise store kar lo
        ans[i]=st.top();
        
        //ab push kar do curr ko
        st.push(curr);
    }
return ans;
}
int main(){
    vector<int>input;
    input.push_back(2);
    input.push_back(1); 
    input.push_back(4);
    input.push_back(3);
    
    // for finding the next smaller element 
    vector<int>ans1;
    ans1=nextSmallerElem(input);
    // for finding the prev smaller element
    cout<<"Ans of next smaller element: "<<endl;
    for(auto i:ans1){
        cout<<i<<" ";
    }
    cout<<endl;
    vector<int>ans2;
    ans2=prevSmallerElem(input);
    cout<<"Ans of prev smaller element: "<<endl;
    for(auto i:ans2){
        cout<<i<<" ";
    }
    cout<<endl;
return 0;
}