//find the element x in the array. Take array and x as input.
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;
    bool flag=false;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            flag=true;  
        }

    }
    if(flag==true) cout<<"element found";
    else cout<<"not";


}