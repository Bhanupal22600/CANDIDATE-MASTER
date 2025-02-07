#include<iostream>
#include<vector>
using namespace std;
void calc(){
    int n;
    cin>>n;
    vector<int> a(n);
    vector<int> b(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    if(n==3){
        cout<<"NO"<<endl;
        return;
    }
    else{
        int ele1=a[0];
        int el1=-1;
        int count1=1;
        for(int i=1;i<n;i++){
            if(a[i]!=ele1){
                count1++;
                el1=a[i];
                break;
            }
        }
        if(count1==2){
            for(int i=1;i<n;i++){
            if(a[i]!=el1 && a[i]!=ele1){
                count1++;
                break;
            }
        }
        }
        int ele2=b[0];
        int el2=-1;
        int count2=1;
        for(int i=1;i<n;i++){
            if(b[i]!=ele2){
                count2++;
                el2=b[i];
                break;
            }
        }
         if(count2==2){
            for(int i=1;i<n;i++){
            if(b[i]!=el2 && b[i]!=ele2){
                count2++;
                break;
            }
        }
        }
        if((count1>1 && count2>1 )|| count1>2 || count2>2){
            cout<<"YES"<<endl;
            return;
        }
        
        else{
            cout<<"NO"<<endl;
            return;
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        calc();
    }
}