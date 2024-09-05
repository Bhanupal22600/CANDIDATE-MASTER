#include<iostream>
#include<vector>
using namespace std;


 vector<int> missingRolls(vector<int>& v1, int mean, int n) {
     int m=v1.size();
     int s=0;
     for(int i=0;i<m;i++){
        s+=v1[i];
     }
     int s1=mean*(m+n)-s;
     vector<int> v(n);
     int count=1;
     for(int i=0;i<n-1;i++){
        for(int j=1;j<=6;j++){
            int k=n-count;
            if((k*1)<=s1-j  && s1-j<=k*6){
                v[i]= j;
                s1-=v[i];
                count++;
                break;
            }
            
            
        }
     }
     if(s1>6){
        return {};
     }
     else{
     v[n-1]=s1;
     }
     return v;
 }

int main() {
    
    vector<int> rolls = {1, 2, 3, 4};  
    int mean = 6;                     
    int n = 4;                         

    vector<int> result = missingRolls(rolls, mean, n);
    for(int i=0;i<n;i++){
        cout<<result[i]<<" ";
    }
    
}