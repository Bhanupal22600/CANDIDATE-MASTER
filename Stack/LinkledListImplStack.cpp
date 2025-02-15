#include<iostream>
using namespace std;
class Node{// User defined data type
public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
class stack{// user defined data structure
public:
    Node* head;
    int size;
    stack(){
        head = NULL;
        size = 0;
    }
    void push(int val){
       Node* temp = new Node(val);
       temp->next = head;
       head = temp;
       size++;
    }
    void pop(){
        if(head==NULL){
            cout<<"Stack is empty"<<endl;
            return ;
        }
        head=head->next;
        size--;
    }
    int top(){
        if(head==NULL){
            cout<<"Stack is Empty!"<<endl;
            return -1;
        }
        return head->val;
    }
    void print(Node* temp){
        if(temp==NULL) return;
        print(temp->next);
        cout<<temp->val<<" ";
    }
    void display(){
        Node* temp = head;
        print( temp);
        cout<<endl;
    }

};

int main(){
    stack st;
    cout<<st.top()<<endl;
    st.push(10);
    st.push(20);
    st.push(30);
    cout<<st.size<<endl;
    st.pop();
    cout<<st.size<<endl;
    cout<<st.top()<<endl;
    st.push(40);
    st.push(50);
    st.push(60);
    st.push(70);
    cout<<st.size<<endl;
    st.display();// print until stack is not full
}