#include<iostream>

using namespace std;
class TrieNode{
    public:
    char data;
    TrieNode* children[26];
    bool isTerminal;

    TrieNode(char d){
        this->data=d;
        for(int i=0;i<26;i++){
            children[i]=NULL;
        }
        this->isTerminal=false;
    }
};

void insertWord(TrieNode* root, string word){
    // cout<<"Inserting "<<word<<endl;
    // base case
    if(word.length()==0){
        root->isTerminal=true;
        return;
    }

    char ch=word[0];
    // Adjust index calculation to handle both uppercase and lowercase letters
    int index = (ch >= 'a' && ch <= 'z') ? ch - 'a' : ch - 'A';
    TrieNode* child;
    //present
    if(root->children[index]!=NULL){
        child=root->children[index];
    }
    else{
        // not present
        child=new TrieNode(ch);
        root->children[index]=child;
    }

    // recursion sambhal lega
    insertWord(child,word.substr(1));
}
// searchoing th word
bool searchWord(TrieNode* root,string word){
    //base case
    if(word.length()==0){
        return root->isTerminal;
    }

     char ch=word[0];
    // Adjust index calculation to handle both uppercase and lowercase letters
    int index = (ch >= 'a' && ch <= 'z') ? ch - 'a' : ch - 'A';
    TrieNode* child;
    //present case checking
    if(root->children[index]!=NULL){
        child=root->children[index];
    }
    else{
        // not present
        return false;
    }
    // recursion sambhal lega
    searchWord(child,word.substr(1));

}
int main(){
    TrieNode* root =new TrieNode('-');

    // root-> insertWord("coding");
insertWord(root,"coding");
insertWord(root,"code");
insertWord(root,"coder");
insertWord(root,"codehelp");
insertWord(root,"vishal");
insertWord(root,"india");
insertWord(root,"uttarpradesh");
insertWord(root,"baby");
insertWord(root,"Ramji");

// search the word
if(searchWord(root,"Pagal")){
    cout<<"present"<<endl;
}
else{
    cout<<"Not present"<<endl;
}

    return 0;
}