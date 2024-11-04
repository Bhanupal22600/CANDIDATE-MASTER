#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int val){//int c lele
        this->val=val;// val=c;
        this->next=NULL;// sab node ke adress ko 0x0 se set krdega
    }
};

//(*ptr).name=ptr->name

int main(){
/*Node a;
a.val=10;
a.next=&b;*/
Node* a= new Node(10);// to avoid above three line we use this single line initiliazation for a node
//a ek daba hai jisme bas ek adress store hota hai this new node ka jiski val =10 hai and next=null 
// this is like (int* ptr= int a )toh ab ptr m a ka adress hai aur new hm likhte hai in oops 
Node* b= new Node(20);
Node* c= new Node(30);
Node* d= new Node(40);
a->next=b;// abe eska mtlb hai a ke next pr b assign krdo as next khud m pointer hai so vo b ka adress print krga
b->next=c;// c ka adress b k next pr daldo
c->next=d;
cout<<a->val<<endl;// this means a k val ko print krdo
// kuch na hai as a ka apna adress hoga wo adress dono ko refer krga a k val,node 

Node* temp=a;// a ka adress hai temp m
// terko ek doubt aa sakta hai as here temp pointer hai toh esme adress store hoga which means &a which is right
// you can use '&a' also but sirf 'a' bhi likhega toh bhi ho jayega as in array we giv arr in function usi se adress pass krte the hm 

while(temp!=NULL){
    cout<<temp->val<<" ";//jiska bhi temp hai a,b,c,d uski val
    temp=temp->next;// temp m temp next(adress of b) ka adress dedo (means whole b dedo(both val,next)) as temp pointer hai so adress lega one by one b,c,d ka
}

cout<<endl;

cout<<a->next->next->val;//a k next(yani b) k next(yani c) ki val(c ki val)



}