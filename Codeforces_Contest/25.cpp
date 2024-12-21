#include<iostream>
#include<cmath>
using namespace std;
bool check(int x, int y, int k) {
    if (y % x != 0) return false; 
    int g = y / x;

    
    while (g > 1) {
        if (g % k != 0) return false; 
        g /= k;
    }

    return g == 1; 
}
void calc(){
    int count=0;
    int k,l1,r1,l2,r2;
    cin>>k>>l1>>r1>>l2>>r2;
    for(int i=l1;i<=r1;i++){
        for(int j=l2;j<=r2;j++){
            if(check(i,j,k)){
                count++;
            }
        }
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