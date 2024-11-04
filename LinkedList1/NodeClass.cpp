//Idea of linking two non-contiguous memory location(nodes)
// as in array or vector we need contingous space but suppose 
//if we need 20 byte to create an array and this 20 byte is not continuous in space
// there is some 15 byte space and somewhere 8 byte space so this is drawback of vector,array 
//we cant create them as vector m toh double hota rhe space suppose empty vector 
//if we put 1st ele then 1s space create then 2 then 4 then 8 and so on..but this space should be continuous so this is overcome by linklist

#include<iostream>
using namespace std;
class Node{//linked list node
    public:
    int val;
    Node* next;// as we can only store address in pointer
    Node(int val){
        this->val=val;// to avoid val=val so that compiler dont confuse we do this.val
        this->next=NULL;//to set all initial address to 0x0 so that icant take garbage value if got given any address
    }
};
int main(){
// 10 20 30 40
Node a(10);// a ek object(VARIABLE name) hai  node(data type(jisem ek int,address hai )) class ka 
Node b(20);
Node c(30);
Node d(40);

// b ka adress means both b.val , b.next is pointing or can be acess through b ka adress 


// forming 
a.next=&b;//&b mtlb hai address of b and a.next is pointer data type so it can easily store adress of b
b.next=&c;
c.next=&d;

cout<<a.next<<endl;

Node* ptr=&b;
(*ptr).val=60;// or ptr->60
cout<<b.val<<endl;


cout<<(*(a.next)).val<<endl;//es pointer ki value ko lakr dega ie b ki val
cout<<a.next->val<<endl;//same meansing as above



a.next->val=70;//esko aase pdte hai 'a' ke next ki value
cout<<b.val<<endl;


//we want to print value of c
cout<<a.next->next->val<<endl;

//we want to print value of d without using c next

cout<<b.next->next->val<<endl;
cout<<a.next->next->next->val<<endl;//same as above

cout<<a.next->next->next->next<<endl;
//a.next se hm b pr aagye ab if we write next then it will print address of c as b k next pr address haga c ka
//and if we here do val instead of next then wo print krega b ki val ko;


Node temp=a;// node class m ek temp object bana diya 
// abhi temp m a ki val and a ka adress hai in its next
while(1){
    cout<<temp.val<<" ";// a ki value krega print in 1st iteration
    if(temp.next==NULL) break;
    temp=*(temp.next);// VVV IMP -in 1st iteration of this loop means ab temp m temp.next(which means similar as a.next mtlb b ka adress) and as outside is * means jo bhi b k adress pr hai lekr aayo aur temp m dal do 
    //and so so on for other iteration NOTE- temp ka adress jo initially hoga wahi rhega when we initialize temp suru m bas wo val,next store krega in its val,next one by one
}

}