
/*https://www.naukri.com/code360/problems/implement-trie_1387095*/
#include <bits/stdc++.h> 
using namespace std;

class Node{
public:
    char data;
    bool terminal;
    unordered_map<char,Node*> children;
    int countWordsEndingHere;
    int countWordsStarting;
    Node(char data){
        this->data=data;
        this->terminal=false;
        this->countWordsEndingHere=this->countWordsStarting=0;
    }
};
class Trie{

    public:

    Node* root;
    
    Trie(){
         root=new Node('\0');
    }

    void insert(string &word){
        Node* curr= root;
        for(int i=0;i<word.size();i++){
            char ch=word[i];
            if(curr->children.count(ch)){
                curr=curr->children[ch];
                curr->countWordsStarting++;
            }
            else{
                Node* child=new Node(ch);
                curr->children[ch]=child;
                curr=curr->children[ch];
                curr->countWordsStarting++;
                
            }
        }
        curr->terminal=true;
        curr->countWordsEndingHere++;
    }

    int countWordsEqualTo(string &word){
         Node* curr= root;
        for(int i=0;i<word.size();i++){
            char ch=word[i];
            if(curr->children.count(ch)){
                curr=curr->children[ch];
            }
            else{
                return 0;
            }
        }
       
       return curr->countWordsEndingHere;
    }
    int countWordsStartingWith(string &word){
         Node* curr= root;
        for(int i=0;i<word.size();i++){
            char ch=word[i];
            if(curr->children.count(ch)){
                curr=curr->children[ch];
            }
            else{
                return 0;
            }
        }
       return curr->countWordsStarting;
    }
    void erase(string &word){
         Node* curr= root;
        for(int i=0;i<word.size();i++){
            char ch=word[i];
            curr=curr->children[ch];  
            curr->countWordsStarting--;
        }
        curr->countWordsEndingHere--;
    }
};
