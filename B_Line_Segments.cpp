#include <bits/stdc++.h>
using namespace std;
double euclideanDistance(double x1, double y1, double x2, double y2) {
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}
void calc() {
    int n;
    cin >> n;
    int px,py,qx,qy;
    cin>>px>>py>>qx>>qy;
    vector<int> v(n);
    int s=0;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        s+=v[i];
    }
    int s1=0;
    int flag=0;
    for(int i=0;i<n;i++){
        s1+=v[i];
        if(s1==v[i]-s1) {
            flag=1;
            break;
        }
    }
    double dist = euclideanDistance(px, py, qx, qy);
    if(dist==0){
        if(flag==1){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    else if(s>=dist){
        cout<<"Yes"<<endl;
        
    }
    else{
        cout<<"No"<<endl;
    }
    return;

}
int main() {
    int t;
    cin >> t;
    while (t--) {
        calc();
    }
    return 0;
}