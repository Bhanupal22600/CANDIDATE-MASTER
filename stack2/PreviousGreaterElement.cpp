#include<iostream>
#include<stack>
using namespace std;
int main(){
    int arr[8] ={3,1,2,7,4,6,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int nge[n];
    // Using a Stack : pop, ans, push
    stack<int> st;
    nge[0] = -1;
    st.push(arr[0]);
    for(int i=1; i<n;i++){
        // pop all elements smaller than arr[i]
        while(st.size()>0 && st.top()<=arr[i]){
            st.pop();
        }
        // mark the ans in age array
        if(st.size()==0) nge[i]=-1;
        else nge[i] = st.top();
        //push the arr[i]
        st.push(arr[i]);
    }
    for(int i=0;i<n;i++){
        cout<<nge[i]<<" ";
    }
    cout<<endl;
}
// pop ans push -> to remember logic
// its is similar to next greastest element
