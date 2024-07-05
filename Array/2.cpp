////Given an array of marks of students, if the marks of any student is less than 35 print its roll no.(roll no here refers to the index of the array.)
#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
for(int j=0;j<n;j++){
    if(arr[j]<35){
        cout<<j<<endl;
    }
}


}