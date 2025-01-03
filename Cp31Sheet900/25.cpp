#include<iostream>
using namespace std;
void calc(){
    int n,m,i,j;
    cin>>n>>m>>i>>j;
    if(n==1 && m==1){
        cout<<1<<" "<<1<<" "<<1<<" "<<1<<endl;
        return;
    }
    else if(n==1){
        cout<<1<<" "<<1<<" "<<1<<" "<<m<<endl;
        return;
    }
    else if(m==1){
        cout<<1<<" "<<1<<" "<<n<<" "<<1<<endl;
        return;
    }


    if(i==1 && j==1){
        cout<<1<<" "<<1<<" "<<n<<" "<<m<<endl;
        return;
    }
    else if(i==1){
        cout<<1<<" "<<1<<" "<<n<<" "<<m<<endl;
        return;
    }
    else if(j==1){
        cout<<1<<" "<<1<<" "<<n<<" "<<m<<endl;
        return;
    }

    cout<<1<<" "<<1<<" "<<n<<" "<<m<<endl;
    return;



    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        calc();
    }
}