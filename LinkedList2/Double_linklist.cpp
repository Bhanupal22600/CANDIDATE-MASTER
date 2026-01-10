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
class DLL{
    public:
        Node* head;
        Node* tail;
        int size;
        DLL(){
            head = tail =NULL;
            size = 0;
        }


void deleteAtHead(){
    if(size==0){
        cout<<"List is Empty";
        return;
    }
    head =  head->next;
    if(head!=NULL) head->prev = NULL;//for base case if condn
    if(head==NULL) tail= NULL;//for base condn base case
    size--;
}
void deleteAtTail(){
    if(size==0){
        cout<<"List is Empty";
        return;
    }
    else if(size==1){//extra
        deleteAtHead();
        return;
    }
    Node* temp = tail->prev;
    temp->next = NULL;
    tail = temp;
    size--;
}
void deleteAtIdx(int idx){
    if(size==0){
        cout<<"List is Empty!";
        return;
    }
    else if(size==1){
        deleteAtHead();
        return;
    }
    else if(idx<0 || idx>=size){
        cout<<"Invalid Index";
        return;
    }
    else if(idx==0) return deleteAtHead();
    else if(idx==size-1) return deleteAtTail();
    else{
        Node* temp = head;
        for(int i=1;i<=idx-1;i++){
            temp = temp->next;
        }
        temp->next = temp->next->next;
        temp->next->prev = temp; // extra
        size--;
    }
}

void insertAtTail(int val){
    Node* temp = new Node(val);
    if(size==0) head = tail = temp;
    else{
        tail->next = temp;
        temp->prev = tail; // extra
        tail = temp;
    }
    size++;
}
void insertAtHead(int val){
    Node* temp = new Node(val);
    if(size==0) head = tail = temp;
    else{
        temp->next = head;
        head->prev = temp; // extra
        head = temp;
    }
    size++;
}
void insertAtIdx(int idx,int val){
    if(idx<0 || idx>size) cout<<"Invalid Index"<<endl;
    else if(idx==0) insertAtHead(val);
    else if(idx==size) insertAtTail(val);
    else{
        Node* t = new Node(val);
        Node* temp = head;
        for(int i=1;i<=idx-1;i++){
            temp = temp->next;

        }
        t->next = temp->next;
        temp->next = t;
        t->prev = temp ;//extra
        t->next->prev=t;//extra
        size++;
    }   
}

int getAtIdx(int idx){
    if(idx<0 || idx>=size){
        cout<<"Invalid Index";
        return -1;   
    }
    else if(idx==0) return head->val;
    else if(idx==size-1) return tail->val;
    else{
        if(idx<size/2){
        Node* temp = head;
        for(int i=1;i<=idx;i++){
            temp=temp->next;
        }
        return temp->val;
        }
        else{ // idx > size/2
            Node* temp = tail;
            for(int i=1;i<size-idx;i++){
                temp = temp->prev;
            }
            return temp ->val;
        }
    }
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

void displayRecRev2(Node* tail){
    while(tail){
    cout<<tail->val<<" ";
    tail = tail->prev;
    }
    cout<<endl;
}

void displayRecRev1(Node* head){
    if(head==NULL) return;
    displayRecRev1(head->next);
    cout<<head->val<<" "; 
}

int main(){
    // 10 20 30 40 50
    Node* a= new Node(10);
    Node* b= new Node(20);
    Node* c= new Node(30);
    Node* d= new Node(40);
    Node* e= new Node(50);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->prev = d;
    d->prev = c;
    c->prev = b;
    b->prev = a;
    displayRecRev1(a);
    cout<<endl;
    displayRecRev2(e);



    cout<<endl;

    //double linklist
    DLL List;
    List.insertAtTail(10);
    List.insertAtTail(20);
    List.insertAtTail(30);
    List.display();
    List.insertAtTail(40);
    List.display();
    List.insertAtHead(50);
    List.display();
    List.insertAtIdx(2,60);
    List.display();
    List.deleteAtTail();
    List.display();
    List.deleteAtHead();
    List.display();
    List.insertAtTail(90);
    List.display();
    List.deleteAtIdx(3);
    List.display();
    cout<<List.getAtIdx(1)<<endl;
    cout<<List.getAtIdx(3);


}