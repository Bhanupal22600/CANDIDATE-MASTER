// #include<iostream>
// #include<vector>
// #include<climits>
// using namespace std;
// void calc(){
//     int n;
//     cin>>n;
//     vector<int> a(n);
//     vector<int> b(n);
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     for(int i=0;i<n;i++){
//         cin>>b[i];
//     }
//     int dif_a=0;
//     int dif_b=INT16_MAX;
//     int k=0;
//     int l=0;
//     for(int i=0;i<n;i++){
//         if(b[i]-a[i]>0 && b[i]-a[i]>dif_a ) {
//             dif_a=b[i]-a[i];
//             k=i;
//         }
//         else if(b[i]-a[i]<dif_b ){
//             l=i;
//             dif_b=a[i]-b[i];
//         }     

//     }

//     int copy=0;
//     for(int i=0;i<n;i++){
//         if(i!=k && b[i]-a[i]==dif_a){
//             copy=1;
//         }
//     }
    

//     if(dif_b-dif_a>=0)
//      int d=dif_b-dif_a;
//      for(int i=0;i<n;i++){
//         if(i!=k && i!=l && a[i]-b[i]<dif_b) {
//             cout<<"NO"<<endl;
//             return;
//         }
//      }
//      cout<<"YES"<<endl;
// }
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         calc();
//     }
// }