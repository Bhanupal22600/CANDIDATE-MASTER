#include<iostream>
#include<vector>
using namespace std;
void sort(vector<int> &v1,vector<int> &v2){
int n1=v1.size();
int n2=v2.size();
int i=0;
int j=0;
int k=0;
vector<int> res(n1+n2);
while(i<n1 && j<n2){
    if(v1[i]<v2[j]){
        res[k]=v1[i];
        i++;
        k++;
    }
    else {
    res[k]=v2[j];
    j++;
    k++;
    }
}

if(i==n1){
    while(j<n2){
        res[k]=v2[j];
        j++;
        k++;
    }
}

if(j==n2){
    while(i<n1){
        res[k]=v1[i];
        i++;
        k++;
    }
}

for(int m=0;m<n1+n2;m++){
    cout<<res[m]<<" ";
}


}
int main(){
vector<int> v1;
vector<int> v2;
v1.push_back(3);
v1.push_back(5);
v1.push_back(6);
v1.push_back(7);
v1.push_back(8);
v1.push_back(9);
v2.push_back(1);
v2.push_back(2);
v2.push_back(4);
sort(v1,v2);

}