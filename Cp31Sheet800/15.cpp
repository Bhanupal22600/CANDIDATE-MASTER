//ques 19
#include<iostream>
using namespace std;
void calc(){
    int n;
    cin>>n;
    int arr[n];
    int odd=0;
    int even=0;

    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]>0){
            even++;
        }
        else{
            odd++;
        }
    }


    int opt=0;
    if(odd*(-1)+even*(1)<0){
        if((odd-even)%2==0){
            opt+=(odd-even)/2;
            odd-=(odd-even)/2;
        }
        else{
            opt+=(odd-even)/2+1;
            odd-=(odd-even)/2+1;
        }

    }
    if(odd%2!=0) opt++;
    cout<<opt<<endl;

    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        calc();
    }
}