#include<iostream>
using namespace std;
int main(){

    int chalk[4]={3,4,1,2};
    int k=25;
    int i=0;
        int n=4;
        while(k>0){
            
            k-=chalk[i];
            
            if(i==n-1){
                i=0;
            }
            else{
                i++;
            }
        }
        cout<< i;
}