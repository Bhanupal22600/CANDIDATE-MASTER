/* 5 3 1 4 2
1 3 5 4 2
1 2 5 4 3
1 2 3 4 5
1 2 3 4 5

#In selection sort we go to each index
and then us index k element ko right m 
sabse min element k sath swap krdenge

*/

#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]={5,3,1,4,2};
    int n=5;
    for(int ele :arr){//this is known as "for each" loop
        cout<<ele<<" ";
    }
        //esme ho ye rha hai ki int ele mtlb element ek
        // integer jo ki arrar k aandar pada hai toh jitne bhi pade hai eke ek krke sab ko nikal lo
        //in "for each loop" we cant give any condition as in "for loop" we can 
        // because of this we cant print half arr element aur any particluar element only thing we 
        //can do with for each loop is we can print whole arr.
    
    cout<<endl;
    //selection sort 
    for(int i=0;i<n-1;i++){
        int min=INT_MAX;
        int mindx=-1;
        for(int j=i;j<n;j++){
            if(arr[j]<min){
                min=arr[j];
                mindx=j;
            }
        }
        swap(arr[i],arr[mindx]);
    }
    for(int ele : arr){
        cout<<ele<<" ";
    }
}
//Space complexity:O(1)
//Time complexity:O(n^2)
//Best Case:O(n^2)
//Avg Case:O(n^2)
//Worst Case:O(n^2)

//Selection sort is unstable 
/*e.g-5a 5b 2 3 1
      1 5b 2 3 5a
      1 2 5b 3 5a
      1 2 3 5b 5a
      1 2 3 5b 5a

      as see jo phele 5a tha vo after sorting 2nd pr ho gya
      mtlb 5b ke baad aagya
*/
// wase toh ye bubble sort se bhi bekar hai and
//bubble sort in built sort se kharab hai
//but we can use selection sort when we need less swapping 
//or says for cost of swapping question
// or starting se 'k' min ele out of n
//orIf size of array is small
