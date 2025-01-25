/*
best example : CD rack
if a want to acess the cd what should i do?
1.Insert of element in stack only happens at the top
2.deletion of element in stack only happens at the top
3.get element only happens at the top


LIFO/FILO(last in first out.first in last out)
Just like linkedlist size of stack is unlimited means kitne bhi ele dal sakte hai 

OPerations on stack
1. st.push(val) - adds a new element at the top -O(1)
2. st.pop()- removes the topmost element-O(1)
3. st.top()- returns the val at the top-O(1)

add,delete,get at a given idx 
T.C & S.C = O(n); then why we study stack
as stacks provides us discipline

more operations
st.size()
st.empty()
*/
#include<iostream>
#include<stack>// like vector stack ko lana pdege es heading se
using namespace std;
int main(){
    stack<int> st;
    cout<<st.size()<<endl;

    //push operation
    st.push(10);
    cout<<st.size()<<endl;
    st.push(20);// 10 k upper aayega 20 
    cout<<st.size()<<endl;
    st.push(30);
    cout<<st.size()<<endl;
    st.push(40);
    cout<<st.size()<<endl;


    // pop operation
    st.pop();//top element hta dega
    cout<<st.size()<<endl;

    //top operation
    cout<<st.top()<<endl;// jo bhi top pr hoga ele wo print hojyega

    //st = 30 20 10 (from top view)
    //cout<<st // dont give our stack gives error
    //how to print the element of stack
    //printing in reverse order -> emptying the stack
    // while(st.size()>0){
    //     cout<<st.top()<<" ";
    //     st.pop();
    // }


    //How to get the elements back in stack after printing /popping
    //O(n) extra _Space for another stack to store previous stack ele
    stack<int> temp;
    while(st.size()>0){
        cout<<st.top()<<" ";
        int x=st.top();
        st.pop();
        temp.push(x);// vector m push_back hota tha
    }
    // putting ele back from temp to st;
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
    cout<<endl<<st.top();
}
/*
COMPARISON ARRAYS,LINKED LISTS AND STACKS

             T.C                          S.C
        arr    LL    stack        arr     LL     stack
 GET:   O(1)   O(n)    O(n)        O(1)    O(1)    O(n)
INSERT: O(n)   O(n)    O(n)        O(n)    O(1)    O(n)
Delete: O(n)   O(n)    O(n)         O(n)    O(1)    O(n)

*/