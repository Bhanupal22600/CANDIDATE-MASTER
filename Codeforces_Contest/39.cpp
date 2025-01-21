#include<iostream>
#include<vector>
using namespace std;
void calc(){
    int n;
    cin>>n;
    vector<int> arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   for (int i = 0; i < N - 1; i++) {
        int minimum = min(arr[i], arr[i + 1]);
        A[i] -= minimum;
        A[i + 1] -= minimum;
    }
 
    cout << (is_sorted(arr.begin(), arr.end()) ? "YES" : "NO") << '\n';


}
int main(){
    int t;
    cin>>t;
    while(t--){
        calc();
    }
}