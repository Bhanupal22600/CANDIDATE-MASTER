//sort the array of 0's and 1's using 1 loop only (time complex=n)
#include<iostream>
#include<vector>
using namespace std;
void sort2(vector<int>& v){
    int n=v.size();
    int i=0;
    int j=n-1;
    while(i<j){
        if(v[i]==0) i++;
        if(v[j]==1) j--;
        if(i>j) break;//this break is much important when i=0 ,j=1 and i ,j are adjacent to each other both pointing at the mid adjacent to each other
        if(v[i]==1 && v[j]==0){
            v[i]=0;
            v[j]=1;
            i++;
            j--;
        }
    }
    
}
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);

    for(int i=0 ;i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    sort2(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}