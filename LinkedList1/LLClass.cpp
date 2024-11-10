#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
class LinkedList{ // User defined data structure bhi use kr sakte hai hm class ko
    public:
    Node* head;
    Node* tail;
    int size;
    LinkedList(){
        head = tail=NULL;
        size=0;
    }
    void insertAtTail(int val){
        Node* temp = new Node(val);
        if(size==0) head=tail=temp;
        else{
            tail->next=temp;
            tail=temp;
        }
        size++;
    }
    void insertAtHead(int val){
        Node* temp = new Node(val);// nayi node bana di hmne
        if(size==0) head=tail=temp;
        else{
            temp->next=head;// temp ke next ko head bana diya
            head=temp;// head ko temp pr legye
        }
        size++;
    }
    void insertAtIdx(int idx, int val){
        Node* temp = new Node(val);// nayi node bana di hmne
        if(idx<0 || idx>size) cout<<"Invalid Index"<<endl;
        else if(idx==0) insertAtHead(val);
        else if(idx==size) head=tail=temp;
        else{
            Node* t=new Node(val);// t pr ek node bana di
            Node* temp=head;
            for(int i=1;i<=idx-1;i++){
                temp=temp->next;// temp ko traverse kro idx tak

            }
            t->next=temp->next;// temp->next abhi idx 4 k address ko pt kr rha and t bhi krega ab
            temp->next=t;//now temp->next ab t k adress ko pt kr rha and 4 node k adress ko jo pt kr rha tha phele wo break ho jayega bond
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
            Node* temp=head;
            for(int i=1;i<=idx;i++){
                temp=temp->next;
            }
            return temp->val;
        }
    }
    void deleteAtHead(){
        if(size==0){
            cout<<"List is Empty";
            return;
        }
        head=head->next;
        size--;
    }
    void deleteAtTail(){
        if(size==0){
            cout<<"List is Empty";
            return;
        }
        Node* temp=head;
        while(temp->next!=tail){
            temp=temp->next;
        }
        temp->next=NULL;
        tail=temp;
        size--;
    }
    void deleteAtIdx(int idx){
        if(size==0){
            cout<<"List is Empty";
            return;
        }
        else if(idx<0 || idx>=size){
            cout<<"Invalid Index";
        }
        else if(idx==0) return deleteAtHead();
        else if(idx==size-1) return deleteAtTail();
        else{
            Node* temp=head;
            for(int i=1;i<=idx;i++){
                temp=temp->next;
            }
            temp->next=temp->next->next;
            size--;
        }
    }
    void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }

    void deletenode(Node* head, Node* target){
        Node* temp=head;
        while(temp->next!=target){
            temp=temp->next;
        }
        temp->next=temp->next->next;
    }
};
int main(){
    //like vector<int> v 
    LinkedList ll;//{ } no need of include any header file head ,tail is null now
    ll.insertAtTail(10);//{10} both head,tail is at 10
    ll.display();
    ll.insertAtTail(20);//{10->20->NULL} head is 10 tail is 20
    ll.display();
    ll.insertAtTail(30);//{10->20->30->NULL}
    ll.display();
    ll.insertAtTail(40);//{10->20->30->40->NULL}
    ll.display();


    

    ll.insertAtHead(50);//{50->10->20->30->40->NULL}
    ll.display();
    ll.insertAtHead(60);//{60->50->10->20->30->40->NULL}
    ll.display();
    


    /*eska mtlb hai
    initially
    idx=  0  1  2  3  4  5  
    node: 60 50 10 20 30 40

    then
    idx=  0  1  2  3  4  5  6
    node: 60 50 10 20 70 30 40

    */
    ll.insertAtIdx(4,70);//{60->50->10->20->80->30->40->NULL}
    ll.display();


    cout<<ll.getAtIdx(3)<<endl;//20 


    ll.deleteAtHead();//60
    ll.display();


    ll.deleteAtTail();//40
    ll.display();


    ll.deleteAtIdx(3);//70
    ll.display();


    deletenode(a,d);
    ll.display()

    cout<<endl<<ll.size;
}
/*limitation of linkedlist is that we to get its head and tail element T.C=O(1) 
but if we have to get any node idx btw head and tail then its T.C=O(N)

AND SO array(vector) is better here as to get any element is T.C=O(1)*/
