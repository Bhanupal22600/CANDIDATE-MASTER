#include<iostream>
using namespace std;
void calc(){
    int n;
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    int x=n;
    int count=0;
    int min_c=0;
    int min_r=0;
    int max_c=n-1;
    int max_r=n-1;
    for(int i=0;i<n/2;i++){
        for(int j=0;j<x-1;j++){
            int count_1=0;
            int count_0=0;
            if(arr[min_r][min_c+j]==1) count_1++;
            else count_0++;
            if(arr[min_r+j][max_c]==1) count_1++;
            else count_0++;
            if(arr[max_r][max_c-j]==1) count_1++;
            else count_0++;
            if(arr[max_r-j][min_c]==1) count_1++;
            else count_0++;

            if(count_1==count_0) count+=2;
            else if (arr[min_r][j] == arr[j][max_c] && arr[j][max_c] == arr[max_r][max_c - j] && arr[max_r][max_c - j] == arr[max_r - j][min_c]) count += 0;
            else count+=1;


        }
         min_c++;
         min_r++;
         max_c--;
         max_r--;
         x=x-2;
    }
    cout<<count<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        calc();
    }
}