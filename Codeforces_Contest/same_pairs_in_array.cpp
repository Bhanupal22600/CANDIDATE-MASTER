#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> arr={2,2,2,3,3,5,4,4};
    sort(arr.begin(),arr.end());
    int i=0;
    int count=1;
    int ans=0;
    int n=8;
    while(i<7){
        for(int j=i+1;j<n;j++){
            if(arr[j]==arr[i]){
                count++;
            }
            else {
                ans+=count/2;
                count=1;
                i=j;
                break;
            }
        }
    }
    cout<<ans;
    

}