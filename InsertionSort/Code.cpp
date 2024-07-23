/*
In insertion sort left sub array sorted hoga 
and right wala unsorted we try to sort left sub array 
by putting from 1 to n-1 index element in right place in right sub array one 
bt one 
e.g
5| 3 1 4 2 
3 5| 1 4 2 # now we will take index 1 to its right posn in left sub array ie 5 se phele
3 1 5 4 2  # now we will do same in index 2 ele
1 3 5| 4 2 # now 1 apni sahi gagha pr aa gya after two swaps from its left element
1 3 4 5| 2 # now 4 bhi aa gya apni sahi gagha pr 
1 3 4 2 5 # now 2 ko apni right place pr le gayenge swap krke ajb tak possible ho
1 3 2 4 5
1 2 3 4 5 # now array is sorted 
*/
#include<iostream>
using namespace std;
int main(){
    int arr[]={5,3,1,4,2};
    int n=5;
    for(int ele: arr){
        cout<<ele<<" ";
    }
    cout<<endl;

    //insertion sort
    for(int i=1;i<n;i++){
        int j=i;
       /* while(j>=1){
            if(arr[j]>=arr[j-1]) break;
            else swap(arr[j],arr[j-1]);
            j--;
        }
        or
*/      
        while(j>=1 && arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}
/* Time Complexity :
Worst Time Complexity
i=1: iteration=1
i=2: iteration=2
i=3: iteration=3
O(n)=1+2+3...n-1=n(n-1)/2=O(n^2)

Avg Case: O(n^2)

Best Case: O(n) 
e.g-1 2 3 4
#here in insertion sort we dont need a extra check mark


#Insertion sort is stable as
e.g- 4a 4b 2 1
4a 2 4b 1
2 4a 4b 1
2 4a 1 4b
2 1 4a 4b
1 2 4a 4b 





# BTW these three sort selection sort sabse bekar hai
and insertion , bubble agar optimised wala ho toh barabar hai
*/