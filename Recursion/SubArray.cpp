//Finding subarray
#include<iostream>
#include<vector>
using namespace std;
void subArray(vector<int> v, int arr[], int n, int idx){
    if(idx==n){
        for(int i=0;i<v.size();i++){
            cout<<v[i];
        }
        cout<<endl;
        return;
    }
    subArray(v,arr,n,idx+1);//left call
    if(v.size()==0 || arr[idx-1]==v[v.size()-1]){
        v.push_back(arr[idx]);
        subArray(v,arr,n,idx+1);//right call
    }
    
}
int main(){
int arr[]={1,2,3,4};
int n=sizeof(arr)/sizeof(arr[0]);
// for(int i=0;i<n;i++){// start of subarray
//     for(int k=i;k<n;k++){
//         for(int j=i;j<=k;j++){
//             cout<<arr[j];
//         }
//         cout<<endl;
//     }
// }//iterative method
vector<int> v;
subArray(v,arr,n,0);

}
/*arr={1,2,3,4}
sub array(continuous set)- {},{1},{2},{3},{4},{1,2},{1,2,3},{1,2,3,4},{2,3},{2,3,4},{3,4}
sub set(2^n) -{},{1},{2},{3},{4},{1,2},{1,3},{1,4},{2,3},{2,4},{3,4},{1,2,3},{1,2,4},{1,3,4},{2,3,4}{1,2,3,4}
#Subset = subsequence bas in subsequence hm order m likhte hai and in subset we can do in any way eg.{1,3} is subsequence but {3,1} is not whereas both are subset
*/