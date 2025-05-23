#include<iostream>
using namespace std;
class Node{// User defined data type
public:
    int val;
    Node* next;
    Node* prev;// extra for DLL
    Node(int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;// extra for DLL
    }
};
class Deque{
    public:
        Node* head;
        Node* tail;
        int s;
        Deque(){
            head = tail =NULL;
            s = 0;
        }
void popFront(){
    if(s==0){
        cout<<"List is Empty";
        return;
    }
    head =  head->next;
    if(head!=NULL) head->prev = NULL;//for base case if condn
    if(head==NULL) tail= NULL;//for base condn base case
    s--;
}
void popBack(){
    if(s==0){
        cout<<"List is Empty";
        return;
    }
    else if(s==1){//extra
        popFront();
        return;
    }
    Node* temp = tail->prev;
    temp->next = NULL;
    tail = temp;
    s--;
}
void pushBack(int val){
    Node* temp = new Node(val);
    if(s==0) head = tail = temp;
    else{
        tail->next = temp;
        temp->prev = tail; // extra
        tail = temp;
    }
    s++;
}
void pushFront(int val){
    Node* temp = new Node(val);
    if(s==0) head = tail = temp;
    else{
        temp->next = head;
        head->prev = temp; // extra
        head = temp;
    }
    s++;
}
int front(){
        if(s==0){
        cout<<"Queue is Empty!"<<endl;
        return -1;
        }
        return head->val;
    }
int back(){
        if(s==0){
        cout<<"Queue is Empty!"<<endl;
        return -1;
        }
        return tail->val;
    }
    int size(){
    return s;
   }
   bool empty(){
    if(s==0) return true;
    else return false;
   }
void display(){
    Node* temp = head;
    while(temp){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
};
int main(){
    Deque dq;
    dq.pushBack(10);
    dq.pushBack(20);
    dq.pushBack(30);
    dq.pushBack(40);
    dq.display();
    dq.popBack();
    dq.display();
    dq.popFront();
    dq.display();
    dq.pushFront(50);
    dq.display();
    cout<<dq.front()<<endl;
    cout<<dq.back()<<endl;
}