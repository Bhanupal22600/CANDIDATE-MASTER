#include<iostream>
using namespace std;
class stack{// user defined data structure
public:
    int arr[5];
    int idx = -1;
    void push(int val){
        if(idx==4){
            cout<<"Stack is Full"<<endl;
            return;
        }
        idx++;
        arr[idx] = val;
    }
    void pop(){
        if(idx==-1){
            cout<<"Stack is empty"<<endl;
            return ;
        }
        idx--;
    }
    int top(){
        if(idx==-1){
            cout<<"Stack is Empty!"<<endl;
            return -1;
        }
        return arr[idx];
    }
    int size(){
        return idx+1;
    }
    void display(){
        for(int i=0;i<=idx;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){
    stack st;
    cout<<st.top()<<endl;
    st.push(10);
    st.push(20);
    st.push(30);
    cout<<st.size()<<endl;
    st.pop();
    cout<<st.size()<<endl;
    cout<<st.top()<<endl;
    st.push(40);
    st.push(50);
    st.push(60);
    st.push(70);
    cout<<st.size()<<endl;
    st.display();// print until stack is not full
}