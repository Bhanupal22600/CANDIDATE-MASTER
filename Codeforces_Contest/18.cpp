#include <iostream>
#include<vector>
using namespace std;
void calc(){
    vector<char> v(3);
    for(int i=0;i<3;i++){
        cin>>v[i];
    }
    if(v[0]<v[2] && (v[1]=='>' || v[1]=='=')){
        v[1]='<';
    }
    else if(v[0]>v[2] && (v[1]='<' || v[1]=='=')){
        v[1]='>';
    }
    else if(v[0]==v[2] && (v[1]='<'|| v[1]=='>')){
        v[1]='=';
    }
    for(int i=0;i<3;i++){
        cout<<v[i];
    }
    cout<<endl;

}
int main(){
    int t;
    cin>>t;
    while(t--){
        calc();
    }
}
