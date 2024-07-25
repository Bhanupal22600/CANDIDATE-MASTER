#include<iostream>
#include<vector>
using namespace std;  
int binarysearch(vector<int>& v, int target) {
        int lo =0;
        int hi =arr.size()-1;
        while(lo<=hi){
            int mid = (hi+lo)/2;
            if(arr[mid]==target) return mid;
            else if(arr[mid]>target) hi =mid-1;//as jab mid ele hi bada hai toh uske aage k toh bade hi honge esliye hm mid seek phele element pr aayege apne hi ko lekr
            else lo=mid+1;// else means target<arr[mid] ab jab toh arr[mid] k left wale toh target se obviously dmall hi honge thats why we put lo to mid+1
        }
    return -1;
}
int main(){
    vector<int> v={1,2,3,4,5,6,7,8};
    int target=6;// to apply binary search first we need to have a sorted array otherwise we cant apply bineary search
    cout<<binarysearch(v,target);
}
/* total no of elements =n
   total no. of operation =x
   n->n/2->n/4->n/8->n/16.....1 ] total x terms
   n->n/2^1->2^2->2^3->...n/2^x
   T.C->O(x)=O(logn) which is less than O(n)[linearsearch]


   In linear search we get T.C=O(n)
*/