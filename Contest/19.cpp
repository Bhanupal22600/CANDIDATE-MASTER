#include<iostream>
using namespace std;
int main() {
    int n=8;
    int arr[8]={16,-1,3,-7,2,8,11,24};
        int count=0;
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=i, cn=1;j<n;j++){
                sum+=arr[j];
                if(sum==cn){
                    count =cn;
                }
                cn++;
                
            }
        }
        if(count==0){
            cout<< -1;
        }
        else {
            cout<< count;
        }
    }