/*Given an array,arr[] containing 'n' integers,the task is
 to find an integer(say k) such that after replacing each and every index of the array by |ai-k| 
where (i belongs to [1,n]),result in a sorted array.If no 
such integer exists that satisfies the above condition then return-1.
find the range of k[a,b].
*/
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
float max(float a,float b){
    if(a>b) return a;
    else return b;
}

float min(float a,float b){
    if(a<b) return a;
    else return b;
}

int main(){
    int arr[]={5,3,10};
    int n=3;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    bool flag=true;
    float kmin =(float)(INT_MIN);
    float kmax =(float)(INT_MAX);
    for(int i=0;i<n-1;i++){
        if(arr[i]>=arr[i+1]){// kmin
            kmin=max(kmin,(arr[i]+arr[i+1])/2.0);
        }
        else{// kmax
            kmax=min(kmax,(arr[i]+arr[i+1])/2.0);
        }
        if(kmin>kmax){
            flag=false;
            break;
        }
    }
    if(flag==false) cout<<-1;
    else if(kmin==kmax){
        if(kmin-(int)kmin==0){
            cout<<"There is only one value of k :"<<kmin;
        }
        else cout<<-1;
    }
    else{
        if(kmin-(int)kmin>0){
            kmin=(int)kmin+1;
        }
        cout<<"Range of k is : ["<<kmin<<","<<(int)kmax<<"]";
    }
}
/*Mathematics used in this question is 
a1       a2      a3      a4      a5       a6
|a1-k|   |a2-k|  |a1-k|  |a1-k|  |a1-k|   |a1-k|
Generalising...
|k-am|>=|k-a(m-1)| # as tabhi toh array sorted hoga after subtracting k this is what we want
squaring both side
(k-am)^2-(k-a(m-1))^2>=0
(k-am)^2-(k-a(m-1))^2>=
(k-am+k-a(m-1))(k-am-k+a(m-1))>=0
(2k-[am+a(m-1)])(am-1-am)>=0


If a(m-1)-am >=0
2k-[am+a(m-1)]>=0
2k>=am+a(m-1)
k>=(am+a(m-1))/2 #min


sim,
If a(m-1)-am<0
k<(am+am-1)/2 #max

*/