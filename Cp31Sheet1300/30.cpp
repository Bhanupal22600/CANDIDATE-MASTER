#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count=0;
    long long sum=0;
    for(int i=0;i<=n-k;i++){
    for(int j=i;j<k+i;j++){
        sum+=arr[j];
        }
        count++;
    }
    float result=(double)sum/count;
    cout << fixed << setprecision(10) << result << endl;


}