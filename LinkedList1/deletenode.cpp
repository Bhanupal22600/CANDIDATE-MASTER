#include<iostream>
using namespace std;
class Node{//Node ek data structure h jo hmne banay hai jisme ek int,pointer datastruct hai
    public:
    int val;
    Node* next;// next ek pointer hai jo address store krega and when we do *next toh jiska addrs store hai us dabbe m jakr value le aayega uski
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
void display(Node* head){
        while(head!=NULL){
            cout<<head->val<<" ";
            head = head->next;
        }
        cout<<endl;
}
Node* deletenode(Node* head, Node* target){
    if(head==target){
        head=head->next;
        return head;
    } 
    Node* temp=head;
    while(temp->next!=target){
        temp=temp->next;
    }
    temp->next=temp->next->next;
    return head;
}
int main(){
Node* a= new Node(10); 
Node* b= new Node(20);
Node* c= new Node(30);
Node* d= new Node(40);
Node* e= new Node(50);
a->next=b; 
b->next=c;
c->next=d;
d->next=e;
Node* head=a;
display(head);
head=deletenode(head,a);
display(head);



}