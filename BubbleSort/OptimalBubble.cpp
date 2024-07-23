#include<iostream>
using namespace std;
int main(){
    int arr[6]={5,4,6,3,2,1};
    int n=6;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    //bubble sort
    bool flag=true;
    for(int i=0;i<n-1;i++){//n-1 passes
        //traverse
        for(int j=0;j<n-1-i;j++){//after putting -i in this line we get our efficient bubble sort code 
            if(arr[j]>arr[j+1]){
                //swap
                swap(arr[j],arr[j+1]);
                flag=false;
            }
        }
        if(flag==true){//swap didn't happen
            break;
        }
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
/*
time complexity:
best case:O(n)
AVg case :O(n^2)
worst case:O(n^2)
*/
// bubble is a stable sort 
//eg. 5a 3 5b 1 2
// afetr bubble sort we get 1 2 3 5a 5b
// and between these two 5 jo phela wala 5 tha wo hai index3 pr and 2nd wala 5 index 4 pr ha
//means  order same raha phala wala 5 phele pr dusra wala 5 dusre pr so its called stable